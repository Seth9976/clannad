// 函数: sub_754b9f
// 地址: 0x754b9f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* edx = arg1
int32_t result = 0
uint32_t ecx = zx.d(*edx)

while (ecx.w != 0)
    edx = &edx[1]
    
    if (ecx.w - 0x61 u<= 5)
        ecx += 0xffd9
    else if (ecx.w - 0x41 u<= 5)
        ecx += 0xfff9
    
    result = (result << 4) + zx.d(ecx.w) - 0x30
    ecx = zx.d(*edx)

return result
