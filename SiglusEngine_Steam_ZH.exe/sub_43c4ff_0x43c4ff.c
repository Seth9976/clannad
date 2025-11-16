// 函数: sub_43c4ff
// 地址: 0x43c4ff
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
var_8 = nullptr

if (arg2 == 0 || *(arg2 + 4) != 3)
    return nullptr

int32_t edi
int32_t var_18_1 = edi
void* edi_1 = arg3
void* esi_1 = arg2 + 0x10

if (edi_1 != 0)
    goto label_43c554

if (sub_43be42(arg1, 1, esi_1, nullptr, nullptr, *(arg1 + 0x10), 1, &var_8, nullptr) == 0)
    edi_1 = var_8
label_43c554:
    void*** eax_2 = sub_42cfa1(0x50)
    void*** result
    
    if (eax_2 == 0)
        result = nullptr
    else
        result = sub_46bee5(eax_2, 0, 0, 0, 0, 1, esi_1)
    
    if (result != 0)
        void*** eax_5
        
        if (*(edi_1 + 0x24) == 0)
            void*** eax_6 = sub_42cfa1(0x40)
            
            if (eax_6 == 0)
                eax_5 = nullptr
            else
                eax_5 = sub_46c09c(eax_6, 6, *(edi_1 + 0x10), *(edi_1 + 0x14), esi_1)
        else
            eax_5 = (*(**(edi_1 + 0x24) + 4))()
        
        result[8] = eax_5
        
        if (eax_5 != 0)
            void* eax_7 = sub_46b5aa(*(edi_1 + 0x20))
            result[4] = eax_7
            
            if (arg3 != 0)
                sub_437571(arg1, eax_7, 0)
            
            void*** eax_8 = sub_42cfa1(0x14)
            void*** eax_9
            
            if (eax_8 == 0)
                eax_9 = nullptr
            else
                eax_9 = sub_46b602(eax_8, result[8], 0, "Value")
            
            if (eax_9 != 0)
                result[8] = eax_9
                sub_4381dc(result)
                return result

return nullptr
