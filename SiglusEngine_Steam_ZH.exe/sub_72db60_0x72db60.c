// 函数: sub_72db60
// 地址: 0x72db60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg6
int32_t ecx = arg4

if (ecx s< ebx)
    if (sub_72da40(arg1, arg2, arg3, ecx, ebx) == 0)
        return 0xffffffff
    
    arg2 = arg3[2]
    ecx = arg3[3]

int32_t ecx_2 = ecx - ebx
int32_t i = *((ebx << 2) + &data_ade5f0) & arg2 s>> ecx_2.b
int32_t eax_4 = arg5

while (i s> *(eax_4 + (ebx << 2)))
    if (ecx_2 s< 1)
        if (sub_72da40(eax_4, arg2, arg3, ecx_2, 1) == 0)
            return 0xffffffff
        
        arg2 = arg3[2]
        ecx_2 = arg3[3]
    
    ecx_2 -= 1
    ebx += 1
    i = (i * 2) | (arg2 s>> ecx_2.b & 1)
    eax_4 = arg5

arg3[2] = arg2
arg3[3] = ecx_2

if (ebx s<= 0x10)
    return zx.d(*(*(eax_4 + (ebx << 2) + 0x48) + *(arg5 + 0x8c) + i + 0x11))

int32_t* ecx_4 = arg3[4]
*(*ecx_4 + 0x14) = 0x79
(*(*ecx_4 + 4))(ecx_4, 0xffffffff)
return 0
