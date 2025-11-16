// 函数: sub_6ec810
// 地址: 0x6ec810
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t ecx = 0x20 - arg1[3]
int32_t eax = *arg1
char* esi = arg1[1]
int32_t result = arg1[2]

if (ecx u> 7)
    while (esi u< eax)
        ecx -= 8
        uint32_t eax_2 = zx.d(*esi) << ecx.b
        esi = &esi[1]
        result |= eax_2
        eax = *arg1
        
        if (ecx u<= 7)
            break

arg1[1] = esi

if (arg2 s<= 0x20 - ecx)
    arg1[3] = 0x20 - ecx
    return result

if (esi u< eax)
    uint32_t eax_4 = zx.d(*esi)
    arg1[3] = 0x20 - ecx
    return eax_4 u>> ((0x20 - ecx).b & 7) | result

arg1[4] = 1
arg1[3] = 0x40000000
return result
