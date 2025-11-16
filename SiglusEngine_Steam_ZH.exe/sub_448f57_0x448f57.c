// 函数: sub_448f57
// 地址: 0x448f57
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg2
int32_t* eax = *(esi + 4)
*(esi + 0x14) &= 0xfffffffe
int32_t edi
int32_t var_1c = edi
int32_t* var_8 = nullptr
int32_t* var_c = nullptr
int32_t result = (*(*eax + 0x10))(eax, 0, &arg2)

if (result s>= 0)
    int32_t* eax_2 = *(esi + 4)
    result = (*(*eax_2 + 0xc))(eax_2, &var_c)
    
    if (result s>= 0)
        int32_t* eax_4 = *(esi + 8)
        int32_t eax_5
        
        if (eax_4 != 0)
            eax_5 = (*(*eax_4 + 0x10))(eax_4)
        
        if (eax_4 != 0 && eax_5 u>= arg2)
        label_448fe3:
            int32_t ebx = **(esi + 4)
            int32_t* eax_9 = *(esi + 8)
            int32_t eax_10 = (*(*eax_9 + 0xc))(eax_9, &arg2)
            result = (*(ebx + 0x10))(*(esi + 4), eax_10)
            
            if (result s>= 0 && var_c != *(arg1 + 0xc))
                int32_t* eax_13 = *(esi + 4)
                
                if (eax_13 != 0)
                    (*(*eax_13 + 8))(eax_13)
                    *(esi + 4) = 0
                
                sub_4435aa(arg1, esi)
        else
            int32_t* var_20_3 = &var_8
            void* var_24_2 = arg2
            result = sub_458de2()
            
            if (result s>= 0)
                int32_t* eax_7 = *(esi + 8)
                
                if (eax_7 != 0)
                    (*(*eax_7 + 8))(eax_7)
                    *(esi + 8) = 0
                
                *(esi + 8) = var_8
                var_8 = nullptr
                goto label_448fe3

int32_t* eax_14 = var_8

if (eax_14 != 0)
    (*(*eax_14 + 8))(eax_14)
    var_8 = nullptr

int32_t* eax_15 = var_c

if (eax_15 != 0)
    (*(*eax_15 + 8))(eax_15)

return result
