import java.util.ArrayList;

public class Game {
  private Board board = new Board();
  private ArrayList<Move> moveHistory = new ArrayList<>();

  public Game(Board board) {
    this.board = board;
  }

  /**
   * javadoc.
   */
  public void movePiece(Piece piece, int destX, int destY) {
    if (!piece.canMove(board, destX, destY)) {
      return;
    }
    Move move = new Move(piece.getCoordinatesX(), piece.getCoordinatesY(), destX, destY, piece);
    Piece killed = board.getAt(destX, destY);
    if (killed != null) {
      move.setKilledPiece(killed);
      board.removeAt(destX, destY);
    }
    moveHistory.add(move);
    piece.setCoordinatesX(destX);
    piece.setCoordinatesY(destY);
  }

  public Board getBoard() {
    return board;
  }

  public void setBoard(Board board) {
    this.board = board;
  }

  public ArrayList<Move> getMoveHistory() {
    return moveHistory;
  }
}
