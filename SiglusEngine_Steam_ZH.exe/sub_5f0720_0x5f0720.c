// 函数: sub_5f0720
// 地址: 0x5f0720
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_5bfcf0(arg1 + 0xe94, *(arg1 + 0xfb4), *(arg1 + 0xfb8))
int32_t ebx = 0
int32_t result = (*(arg1 + 0x1208) - *(arg1 + 0x1204)) s/ 0x2cc

if (result s> 0)
    int32_t esi_1 = 0
    
    do
        void* ecx_4 = *(arg1 + 0x1204) + esi_1
        sub_5bfcf0(ecx_4, *(ecx_4 + 0x120), *(ecx_4 + 0x124))
        ebx += 1
        esi_1 += 0x2cc
        result = (*(arg1 + 0x1208) - *(arg1 + 0x1204)) s/ 0x2cc
    while (ebx s< result)

return result
