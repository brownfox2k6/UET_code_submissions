public class Rook extends Piece {
  public Rook(int coordinateX, int coordinateY) {
    super(coordinateX, coordinateY);
  }

  public Rook(int coordinateX, int coordinateY, String color) {
    super(coordinateX, coordinateY, color);
  }

  @Override
  public String getSymbol() {
    return "R";
  }

  /**
   * javadoc.
   */
  @Override
  public boolean canMove(Board board, int destX, int destY) {
    if (!board.validate(destX, destY)) {
      return false;
    }
    Piece dest = board.getAt(destX, destY);
    if (dest != null && getColor().equals(dest.getColor())) {
      return false;
    }
    if (getCoordinatesX() == destX && getCoordinatesY() != destY) {
      int y = getCoordinatesY();
      int dy = y < destY ? 1 : -1;
      while (y + dy != destY) {
        if (board.getAt(destX, y + dy) != null) {
          return false;
        }
        y += dy;
      }
      return true;
    }
    if (getCoordinatesX() != destX && getCoordinatesY() == destY) {
      int x = getCoordinatesX();
      int dx = x < destX ? 1 : -1;
      while (x + dx != destX) {
        if (board.getAt(x + dx, destY) != null) {
          return false;
        }
        x += dx;
      }
      return true;
    }
    return false;
  }
}
