// 函数: sub_4d549f
// 地址: 0x4d549f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = nullptr
void var_18
sub_4c6bfc(&var_18, 0x53455250)
int32_t result = sub_4accb6(arg1)

if (result s>= 0)
    result = (*(**(arg1 + 0xe0) + 8))(&var_8)
    
    if (result s>= 0)
        if (result != 0)
        label_4d5512:
            int32_t edi
            int32_t var_24_2 = edi
            void* eax_8 = sub_4c6d8a(&var_18)
            
            if (eax_8 u> 0x8000)
                sub_4a4100(arg1, nullptr, 0x11c4, 
                    "constant table info exceeds maximum comment size")
                result = 0x80004005
            else
                result = sub_4d19ed(arg1, eax_8)
                
                if (result s>= 0)
                    void* eax_10 = *(arg1 + 0x10c)
                    _memcpy(eax_10 + (eax_8 << 2) + 4, eax_10 + 4, 
                        (*(arg1 + 0x110) << 2) + 0xfffffffc)
                    result = sub_4c6d96(&var_18, *(arg1 + 0x10c) + 4, eax_8)
                    
                    if (result s>= 0)
                        *(arg1 + 0x110) += eax_8
                        int32_t eax_15 = *(arg1 + 0x110)
                        *(arg1 + 0x120) += eax_8
                        *(arg1 + 0x11c) = eax_15
                        result = 0
        else
            int32_t* eax_3 = var_8
            int32_t eax_4 = (*(*eax_3 + 0x10))(eax_3, 1, 0)
            int32_t* eax_5 = var_8
            result = sub_4c6c51(&var_18, (*(*eax_5 + 0xc))(eax_5, eax_4))
            
            if (result s>= 0)
                goto label_4d5512

int32_t* eax_16 = var_8

if (eax_16 != 0)
    (*(*eax_16 + 8))(eax_16)
    var_8 = nullptr

sub_4c6c19(&var_18)
return result
