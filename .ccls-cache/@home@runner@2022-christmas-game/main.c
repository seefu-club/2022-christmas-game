#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

void musicPrint(char title[256], char author[256]);
void msgPrint(char msg[256], char author[256]);

//저녁메뉴, 영화 리스트
char * movie[9] = {"나홀로 집에","로맨틱 홀리데이", "크리스마스에는 행복이","러브 액츄얼리","팀버튼의 크리스마스 악몽","폴링 포 크리스마스","렛 잇 스노우","크리스마스를 농장에서","크리스마스를 망치는 방법"};

char * dinner[7] = {"닭다리살 스테이크","마라탕","케이크","치킨","피자","떡볶이","파스타"};

int main(void) {

      for (int i = 0; i <22; i++  ) {
      printf("🌟");
  }
  
  printf("\n\n| 2022 씨퓨에서 만든 🎄크리스마스🎄 게임! |\n\n"); //시작 멘트
  
  printf("💗 🧡 💛 💚 💙\n");
  printf("🎄 🎄 🎄 🎄 🎄\n");
  printf("🤎 🤎 🤎 🤎 🤎\n");
  printf("1  2  3  4  5\n\n");

  int number;
  printf("트리 번호를 선택해주세요! : ");
  scanf("%d", &number);
  if (number == 0 || number > 6) {
    printf("올바른 번호를 선택해주세요 😥 :");
    scanf("%d", &number);
  }
    if(number >= 1 && number <= 5) {
    
    printf("\n선물이 무엇일까요? 💌\n\n");
    sleep(1);
    printf("확인해보세요!\n\n");
    sleep(1);
    
    for(int j = 0; j < 3; j++) {
      printf("🎁\n\n");
      sleep(1);
    }
    
    srand(time(NULL));
    int num = rand() % 5;
    
    if (num == 0) {
      printf("당신의 선물은 포춘 쿠키 메세지입니다 🤗\n\n");
      srand(time(NULL));
      int msgNumber = rand() % 4;
      if(msgNumber == 0) {
        msgPrint("크리스마스는 마법 지팡이를 온 세계에 흔든다. 그리고 보아라, 모든 것이 부드러워지고 더 아름다워진다. ", "- 노먼 빈센트 필 -");
      }
      if(msgNumber == 1) {
        msgPrint("크리스마스는 사탕과도 같다. 그것은 당신의 입에서 천천히 녹아 모든 미뢰를 달콤하게 하고 당신의 소원이 영원히 남도록 만든다. ", "- 리셀 E. 굿리치 -");
      }
      if(msgNumber == 2) {
        msgPrint("신은 크리스마스가 행복한 시간이 되어야 한다는 것을 우리에게 상기시키기 위해 산타클로스를 지구에 두었다. ", "- 빌 킨 -");
      }
      if(msgNumber == 3) {
        msgPrint("크리스마스 이브는 당신을 숄처럼 감싸는 노래의 밤이었다. 하지만 그것은 당신의 몸보다도 따뜻하게 한다. 그것은 당신의 심장을 따뜻하게 하고 가득 채우기도 한다. 영원히 머무를 멜로디로.", "- 베스 스트리터 알드리치 -");
      }
    }
    else if (num == 1) {
      printf("당신에게 드리는 선물은 크리스마스 노래입니다 🎵\n\n");
      srand(time(NULL));
      int musicNumber = rand() % 7;
      if (musicNumber == 0) {
        musicPrint("Christmas without you", "AVA MAX");
      }
      if (musicNumber == 1) {
        musicPrint("Mistletoe", "Justin bieber");
      }
      if (musicNumber == 2) {
        musicPrint("Think of Christmas", "Anne-marie");
      }
      if (musicNumber == 3) {
        musicPrint("Rockin' Around The Christmas Tree", "Brenda Lee");
      }
      if (musicNumber == 4) {
        musicPrint(("Last Christmas"), "Wham!");
      }
      if (musicNumber == 5) {
        musicPrint("My kind of present", "Meghantrainor");
      }
      if (musicNumber == 6) {
        musicPrint("25th", "Tori kelly");
      }
      }
    else if(num==2) {
    
      printf("\n꽝입니다..");
      
  }
    else if(num==3) {  
    
      printf("\당신에게 드리는 선물은 크리스마스 영화입니다 🎞️!\n\n\"%s\"을/를 추천합니다!",movie[rand()%9]);
      
    
  }
    else if(num==4) {
      
    printf("\n당신에게 드리는 선물은 저녁메뉴 추천입니다 🥘\n\n\"%s\"을/를 추천합니다!",dinner[rand()%7]);
      
     
    
  }
     
    }

  printf("\n\n| 게임을 플레이 해주셔서 감사합니다🙇‍♂️🙇‍♀️ |\n");
  printf("-씨퓨 동아리 일동-\n\n"); //끝 멘트

  printf("github.com/seefu-club/2022-christmas-game\n\n");
  for (int j = 0;j <22; j++  ) {
      printf("🌟");
    }
  
  return 0;
}

void musicPrint(char title[256], char author[256]) {
  printf("곡 이름: %s\n\n", title);
  printf("아티스트: %s", author);
}

void msgPrint(char msg[256], char author[256]) {
  printf("%s\n\n", msg);
  printf("%s", author);
 
}
