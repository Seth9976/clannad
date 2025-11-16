// 函数: sub_40b661
// 地址: 0x40b661
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* ecx = arg1
int32_t result = 0

while (*ecx != 0xff)
    ecx = &ecx[4]
    result += 1

return result
