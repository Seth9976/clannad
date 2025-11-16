// 函数: sub_6ee9a0
// 地址: 0x6ee9a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t esi = 0

if (arg5 s<= 0)
    return 

do
    int32_t ecx_2 = *(arg6 + (*(arg4 + (esi << 2)) << 2))
    int64_t* eax_4 = arg2 + ecx_2
    int64_t* eax_6 = arg1 + ecx_2
    int64_t st1 = *(eax_4 + arg3)
    int32_t edi_1 = arg3 * 3
    int64_t st2 = *(eax_4 + (arg3 << 1))
    int64_t st3 = *(eax_4 + edi_1)
    *eax_6 = *eax_4
    *(eax_6 + arg3) = st1
    void* edx_2 = eax_4 + (arg3 << 2)
    *(eax_6 + (arg3 << 1)) = st2
    *(eax_6 + edi_1) = st3
    void* eax = eax_6 + (arg3 << 2)
    st1 = *(edx_2 + arg3)
    st2 = *(edx_2 + (arg3 << 1))
    st3 = *(edx_2 + edi_1)
    *eax = *edx_2
    *(eax + arg3) = st1
    *(eax + (arg3 << 1)) = st2
    *(eax + edi_1) = st3
    esi += 1
while (esi s< arg5)
