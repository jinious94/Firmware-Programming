# 펌웨어 프로그래밍 

## 개요
마이크로컨트롤러 중 아트멜(Atmel)사에서 제작한 ATmega128을 사용하여 다양한 프로젝트를 진행하였습니다. LED와 버튼 제어 프로젝트에서는 DDR 레지스터를 활용하여 디지털 데이터의 입출력 방향을 설정하였고, PORT 및 PIN 레지스터를 통해 데이터의 실제 입출력을 제어했습니다. 또한 각종 비트 연산을 통해 LED에서 표현될 불빛의 위치와 움직임을 조절하였습니다.

### PWM (Pulse Width Modulation)
PWM은 펄스 폭 변조(Pulse Width Modulation)의 약자로, 디지털 신호를 이용하여 아날로그 신호를 효과적으로 생성하는 기술입니다. ATmega128에서는 PWM을 사용하여 LED의 밝기를 조절하거나 모터의 속도를 제어하는 등 다양한 애플리케이션에 활용할 수 있습니다. PWM 신호는 특정 주기와 그 주기 내에서의 펄스 폭을 조절하여 원하는 출력을 생성할 수 있습니다.

### CTC (Clear Timer on Compare Match)
CTC 모드는 타이머의 동작 모드 중 하나로, 타이머가 설정된 일정한 주기에서만 작동하고, 주기마다 일정한 작업을 수행하고자 할 때 유용합니다. ATmega128의 타이머를 CTC 모드로 설정하여 정확한 타이밍 기반의 작업을 수행할 수 있습니다. 예를 들어, 정확한 주기로 인터럽트를 발생시켜 특정 작업을 수행하거나 타이밍 관련된 애플리케이션에서 사용됩니다.

위의 프로젝트들에서는 PWM과 CTC 기능을 활용하여 LED의 밝기 조절 및 정밀한 타이밍 제어를 구현하였습니다. 각 기술을 이해하고 활용함으로써 ATmega128을 효과적으로 제어할 수 있는 능력을 키웠습니다.

## 각 프로젝트 설명
<details>
    <summary>Button</summary>

    - 사용 언어: C
    - 프로젝트 설명:
    - 프로젝트 중요 포인트:
</details>
<details>
    <summary>Button_1</summary>

    - 사용 언어: C
    - 프로젝트 설명:
    - 프로젝트 중요 포인트:
</details>
<details>
    <summary>Button_2</summary>

    - 사용 언어: C
    - 프로젝트 설명:
    - 프로젝트 중요 포인트:
</details>
<details>
    <summary>Button_INT</summary>

    - 사용 언어: C
    - 프로젝트 설명:
    - 프로젝트 중요 포인트:
</details>
<details>
    <summary>LED</summary>

    - 사용 언어: C
    - 프로젝트 설명: 
    - 프로젝트 중요 포인트:
</details>
<details>
    <summary>LED_8</summary>

    - 사용 언어: C
    - 프로젝트 설명:
    - 프로젝트 중요 포인트:
</details>
<details>
    <summary>LED_arr</summary>

    - 사용 언어: C
    - 프로젝트 설명:
    - 프로젝트 중요 포인트:
</details>
<details>
    <summary>LED_pointer</summary>

    - 사용 언어: C
    - 프로젝트 설명:
    - 프로젝트 중요 포인트:
</details>
<details>
    <summary>LED_struct</summary>

    - 사용 언어: C
    - 프로젝트 설명:
    - 프로젝트 중요 포인트:
</details>
<details>
    <summary>FND</summary>

    - 사용 언어: C
    - 프로젝트 설명:
    - 프로젝트 중요 포인트:
</details>
<details>
    <summary>FND_4</summary>

    - 사용 언어: C
    - 프로젝트 설명:
    - 프로젝트 중요 포인트:
</details>
<details>
    <summary>NORMAL</summary>

    - 사용 언어: C
    - 프로젝트 설명:
    - 프로젝트 중요 포인트:
</details>
<details>
    <summary>PWM</summary>

    - 사용 언어: C
    - 프로젝트 설명:
    - 프로젝트 중요 포인트:
</details>
<details>
    <summary>PWM_16</summary>

    - 사용 언어: C
    - 프로젝트 설명:
    - 프로젝트 중요 포인트:
</details>
<details>
    <summary>CTC</summary>

    - 사용 언어: C
    - 프로젝트 설명:
    - 프로젝트 중요 포인트:
</details>
