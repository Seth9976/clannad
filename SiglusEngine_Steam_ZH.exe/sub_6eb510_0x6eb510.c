// 函数: sub_6eb510
// 地址: 0x6eb510
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx

if (arg5 s>= 2)
    ebx = &arg4[0x40]
    *arg4 *= arg6
    (*(arg1 + 0x54))(ebx, arg4, arg5)
else
    ebx = &arg4[0x40]
    uint32_t eax_3 = zx.d(((sx.d(*arg4) * zx.d(arg6) + 0xf) s>> 5).w)
    int32_t ecx_4
    int32_t edi_2
    edi_2, ecx_4 = __memfill_u32(ebx, eax_3 | eax_3 << 0x10, 0x20)

int32_t eax_7 = *(*(arg1 + 0xd4) + (arg2 << 2))
int32_t ecx_8 = *(*(arg1 + 0xd0) + (arg2 << 2)) u>> 8 & 7
int32_t edi_4 = *(arg1 + (*(arg1 + 0x11c) << 2) + 0x24c) + eax_7

if (ecx_8 == 1)
    return (*(arg1 + 0x48))(edi_4, *(arg1 + (arg3 << 2) + 0x264), ebx)

arg5 =
    eax_7 + *(arg1 + (*(arg1 + ((0x10011121 s>> (ecx_8 << 2).b & 0xf) << 2) + 0x114) << 2) + 0x24c)
int16_t eax_17 = *(*(arg1 + 0xd8) + (arg2 << 1))
int32_t var_c
bool cond:0 = sub_6eb460(eax_17, &var_c, arg1, arg3, eax_17) s<= 1
int32_t eax_19 = *(arg1 + (arg3 << 2) + 0x264)

if (cond:0)
    return (*(arg1 + 0x4c))(edi_4, var_c + arg5, eax_19, ebx)

int32_t var_8
return (*(arg1 + 0x50))(edi_4, var_c + arg5, var_8 + arg5, eax_19, ebx)
