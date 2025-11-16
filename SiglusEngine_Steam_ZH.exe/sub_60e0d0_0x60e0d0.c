// 函数: sub_60e0d0
// 地址: 0x60e0d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** var_4 = arg1
void** lpText = arg1
sub_60e050()
sub_683ad0(0)
void** lpCaption = data_bac510 + 0x1c

if (lpCaption[5] u>= 8)
    lpCaption = *lpCaption

if (lpText[5] u>= 8)
    lpText = *lpText

enum MESSAGEBOX_RESULT result = MessageBoxW(data_4ebe3ac, lpText, lpCaption, arg2)
sub_683ad0(1)
return result
