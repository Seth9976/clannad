// 函数: sub_4e0270
// 地址: 0x4e0270
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
void** edi_1 = *arg3
void* result = *(arg1 + 0x13c)

if (result s> 0)
    void* ecx_1 = *(arg1 + 0x70)
    int32_t* ebx_2 = arg2 - edi_1
    arg3 = result
    bool cond:0_1
    
    do
        void* i = *edi_1
        char* edx_1 = *(ebx_2 + edi_1)
        
        for (int32_t esi_1 = ecx_1 + i; i u< esi_1; i += 2)
            void* ecx_2
            ecx_2.b = *edx_1
            edx_1 = &edx_1[1]
            *i = ecx_2.b
            *(i + 1) = ecx_2.b
        
        edi_1 = &edi_1[1]
        result = arg3 - 1
        cond:0_1 = arg3 != 1
        arg3 = result
    while (cond:0_1)

return result
