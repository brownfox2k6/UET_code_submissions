public class Bishop extends Piece {
  public Bishop(int coordinateX, int coordinateY) {
    super(coordinateX, coordinateY);
  }

  public Bishop(int coordinateX, int coordinateY, String color) {
    super(coordinateX, coordinateY, color);
  }

  @Override
  public String getSymbol() {
    return "B";
  }

  /**
   * javadoc.
   */
  @Override
  public boolean canMove(Board board, int destX, int destY) {
    if (!board.validate(destX, destY)
        || getCoordinatesX() == destX
        || getCoordinatesY() == destY
        || Math.abs(getCoordinatesX() - destX) != Math.abs(getCoordinatesY() - destY)) {
      return false;
    }
    Piece dest = board.getAt(destX, destY);
    if (dest != null && dest.getColor().equals(getColor())) {
      return false;
    }
    int dx = getCoordinatesX() < destX ? 1 : -1;
    int dy = getCoordinatesY() < destY ? 1 : -1;
    int x = getCoordinatesX() + dx;
    int y = getCoordinatesY() + dy;
    while (x != destX) {
      if (board.getAt(x, y) != null) {
        return false;
      }
      x += dx;
      y += dy;
    }
    return true;
  }
}
