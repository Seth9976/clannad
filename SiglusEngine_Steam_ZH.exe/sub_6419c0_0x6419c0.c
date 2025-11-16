// 函数: sub_6419c0
// 地址: 0x6419c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** lpCaption = data_bac510 + 0x1c

if (lpCaption[5] u>= 8)
    lpCaption = *lpCaption

if (arg1[5] u>= 8)
    arg1 = *arg1

MessageBoxW(data_4ebe3ac, arg1, lpCaption, MB_ICONEXCLAMATION)
void* result = data_bac4a0
*(result + 0x1eb) = 0x101
*(result + 0x1ed) = 1
return result
