// 函数: sub_4e02d0
// 地址: 0x4e02d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = *arg3
int32_t result = *(arg1 + 0x13c)
int32_t esi = 0

if (result s> 0)
    arg3 = arg2
    int32_t edi
    int32_t var_10_1 = edi
    
    do
        char* edx_2 = *arg3
        void* i = *(ebx + (esi << 2))
        
        for (void* edi_2 = *(arg1 + 0x70) + i; i u< edi_2; i += 2)
            void* ecx_1
            ecx_1.b = *edx_2
            edx_2 = &edx_2[1]
            *i = ecx_1.b
            *(i + 1) = ecx_1.b
        
        sub_498570(ebx, esi, ebx, esi + 1, 1, *(arg1 + 0x70))
        result = *(arg1 + 0x13c)
        esi += 2
        arg3 = &arg3[1]
    while (esi s< result)

return result
