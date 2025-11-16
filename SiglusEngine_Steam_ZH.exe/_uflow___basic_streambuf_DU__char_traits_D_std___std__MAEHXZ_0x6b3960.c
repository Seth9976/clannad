// 函数: ?uflow@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MAEHXZ
// 地址: 0x6b3960
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = (*(*arg1 + 0x18))()

if (result == 0xffffffff)
    return result

int32_t* eax_2 = arg1[0xb]
*eax_2 -= 1
int32_t* ecx = arg1[7]
char* edx = *ecx
*ecx = &edx[1]
return zx.d(*edx)
