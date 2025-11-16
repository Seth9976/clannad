// 函数: sub_6290a0
// 地址: 0x6290a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_e = 0
int64_t var_16 = 0
int128_t var_3c
__builtin_memset(&var_3c, 0, 0x24)
int32_t var_e_1 = 0x36
var_3c.d = arg2
var_3c:8.d = 0x200001
var_16.d = ((arg2 * arg4) << 2) + 0x36
var_16:4.d = 0
__builtin_memset(&var_3c:0xc, 0, 0x18)
var_3c:4.d = neg.d(arg4)
sub_5979b0(arg3, ((arg2 * arg4) << 2) + 0x36)
int32_t* edx = arg3
int64_t* ecx_2 = *edx

if (ecx_2 == edx[1])
    ecx_2 = nullptr

int32_t esi_1 = 0
*ecx_2 = 0x4d42.q
ecx_2[1].d = var_16:6.d
int32_t* result
result.w = 0
*(ecx_2 + 0xc) = 0
*(ecx_2 + 0xe) = 0x28.o
*(ecx_2 + 0x1e) = var_3c
int128_t var_2c
*(ecx_2 + 0x2e) = var_2c:0xc.q

if (arg4 s> 0)
    int32_t ebx_1 = arg2 << 2
    int32_t edi_1 = 0
    
    do
        void* const ecx_3 = *edx
        
        if (ecx_3 == edx[1])
            ecx_3 = nullptr
        
        sub_748840(ecx_3 + 0x36 + edi_1, *arg5 * esi_1 + arg5[1], ebx_1)
        edx = arg3
        esi_1 += 1
        edi_1 += ebx_1
    while (esi_1 s< arg4)

result.b = 1
return result
