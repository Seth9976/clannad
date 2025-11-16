// 函数: sub_41df00
// 地址: 0x41df00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = 0
void* result = &data_9253a4

while (*(result - 0x134) == 0)
    if (*result != 0)
        ecx += 1
        break
    
    if (*(result + 0x134) != 0)
        ecx += 2
        break
    
    if (*(result + 0x268) != 0)
        ecx += 3
        break
    
    result += 0x4d0
    ecx += 4
    
    if (result s>= 0x9266e4)
        break

if (ecx != 0x10)
    return result

HGLOBAL eax = GlobalAlloc(GHND, 0x20)
int32_t* eax_1 = GlobalLock(eax)
*eax_1 = 4
eax_1[1] = 0
GlobalUnlock(eax)
SendIMEMessageExA(GetActiveWindow(), eax)
GlobalFree(eax)
return WINNLSEnableIME(nullptr, 0)
