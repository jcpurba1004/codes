public class PlaylistSong {
   private String name;
   private PlaylistSong nextPlaylistSongPtr;

   PlaylistSong() {
      this.name = "";
      nextPlaylistSongPtr = null;
   }

   PlaylistSong(String name) {
      this.name = name;
      this.nextPlaylistSongPtr = null;
   }

   PlaylistSong(String name, PlaylistSong nextLoc) {
      this.name = name;
      this.nextPlaylistSongPtr = nextLoc;
   }

   void InsertAfter(PlaylistSong nodeLoc) {
      PlaylistSong tmpNext = null;

      tmpNext = this.nextPlaylistSongPtr;
      this.nextPlaylistSongPtr = nodeLoc;
      nodeLoc.nextPlaylistSongPtr = tmpNext;
   }

   PlaylistSong GetNext() {
      return this.nextPlaylistSongPtr;
   }

   void PrintNodeData() {
      System.out.println(this.name);
   }
}