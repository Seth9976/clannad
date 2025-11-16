// 函数: sub_5dd280
// 地址: 0x5dd280
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1
int32_t var_8 = 0
int32_t result = (*(arg1 + 0x1b0) - *(arg1 + 0x1ac)) s/ 0x3b4

if (result s> 0)
    void* edi_1 = arg2
    int32_t ebx_1 = 0
    int32_t esi_6
    
    do
        void* esi_3 = *(arg1 + 0x1ac) + ebx_1
        
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
        result = (*(var_c + 0x1b0) - *(var_c + 0x1ac)) s/ 0x3b4
    while (esi_6 s< result)

return result
