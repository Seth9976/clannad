// 函数: sub_5dfa80
// 地址: 0x5dfa80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1
int32_t var_8 = 0
int32_t result = (*(arg1 + 0x8c) - *(arg1 + 0x88)) s/ 0x3b4

if (result s> 0)
    void* edi_1 = arg2
    int32_t ebx_1 = 0
    int32_t esi_6
    
    do
        void* esi_3 = *(arg1 + 0x88) + ebx_1
        
        if (*(esi_3 + 0x28) != 0)
            Concurrency::details::ContextBase::ContextBase(edi_1, &arg2, esi_3 + 0x24)
        
        void var_10
        
        if (*(esi_3 + 0x158) != 0)
            Concurrency::details::ContextBase::ContextBase(edi_1, &var_10, esi_3 + 0x154)
        void var_14
        
        if (*(esi_3 + 0x288) != 0)
            Concurrency::details::ContextBase::ContextBase(edi_1, &var_14, esi_3 + 0x284)
        ebx_1 += 0x3b4
        esi_6 = var_8 + 1
        var_8 = esi_6
        arg1 = var_c
        result = (*(var_c + 0x8c) - *(var_c + 0x88)) s/ 0x3b4
    while (esi_6 s< result)

return result
