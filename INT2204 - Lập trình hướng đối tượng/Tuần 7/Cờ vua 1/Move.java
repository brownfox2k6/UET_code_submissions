public class Move {
  private int startX;
  private int endX;
  private int startY;
  private int endY;
  private Piece movedPiece;
  private Piece killedPiece;

  /**
   * javadoc.
   */
  public Move(int startX, int endX, int startY, int endY, Piece movedPiece) {
    this.startX = startX;
    this.endX = endX;
    this.startY = startY;
    this.endY = endY;
    this.movedPiece = movedPiece;
  }

  public Move(int startX, int endX, int startY, int endY, Piece movedPiece, Piece killedPiece) {
    this(startX, endX, startY, endY, movedPiece);
    this.killedPiece = killedPiece;
  }

  /**
   * javadoc.
   */
  @Override
  public String toString() {
    char charX = (char) (endX + 'a' - 1);
    return String.format("%s-%s%s%d", movedPiece.getColor(), movedPiece.getSymbol(), charX, endY);
  }

  public int getStartX() {
    return startX;
  }

  public void setStartX(int startX) {
    this.startX = startX;
  }

  public int getEndX() {
    return endX;
  }

  public void setEndX(int endX) {
    this.endX = endX;
  }

  public int getStartY() {
    return startY;
  }

  public void setStartY(int startY) {
    this.startY = startY;
  }

  public int getEndY() {
    return endY;
  }

  public void setEndY(int endY) {
    this.endY = endY;
  }

  public Piece getMovedPiece() {
    return movedPiece;
  }

  public void setMovedPiece(Piece movedPiece) {
    this.movedPiece = movedPiece;
  }

  public Piece getKilledPiece() {
    return killedPiece;
  }

  public void setKilledPiece(Piece killedPiece) {
    this.killedPiece = killedPiece;
  }
}
