#include <stdio.h>

#define TSUU 5
#define number 20

void disp_title();
void aaa();
void bbb();
void ccc();
void ddd();
void dumy();

int flag=0;

int main() {
  char mtitle[][number] = {
    "メニュー",
    "1:図書館一覧",
    "2:図書検索",
    "3:貸出/検索",
    "9:終了"
  };

  void (*fp[]) ()={dumy, aaa, bbb, ccc, dumy, dumy, dumy, dumy, ddd};
  int no;

  while(flag == 0) {
    disp_title(mtitle, TSUU);
    printf("番号 ＝ ");
    scanf("%d", &no);
    switch(no){
      case 1:
      case 2:
      case 3:
      case 9:
        fp[no]();
        break;
      default:
        printf("番号違い\n");
        break;
    }
  }

  return 0;

}

void dumy(void){
  /*ダミー*/
}

void aaa(void){
  printf("図書館一覧関数の動作\n\n");
}

void bbb(void){
  printf("図書館検索関数の動作\n\n");
}

void ccc(void){
  printf("貸出/返却関数の動作\n\n");
}

void ddd(void){
  printf("終了関数の動作\n\n");
}

/* メニューの表示*/
void disp_title(char tp[][number], int suu){
  int i;
  
  for (i=0; i<suu; i++){
    printf("%s\n", (tp+i));
  }
}
