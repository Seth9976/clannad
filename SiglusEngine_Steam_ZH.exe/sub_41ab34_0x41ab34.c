// 函数: sub_41ab34
// 地址: 0x41ab34
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[2].b != 1)
    return 0x80004005

void* eax = arg1[1]
void* ecx = *arg1
int32_t edx_1 = *(eax + 0x68)
int32_t edi
int32_t var_20_1 = edi
int32_t edi_1 = *(ecx + 0x68)
int32_t var_10_1 = edx_1

if (edx_1 u<= edi_1)
    var_10_1 = edi_1

int32_t i_6 = *(eax + 0x6c)
int32_t i_7 = *(ecx + 0x6c)
int32_t i_2 = i_6

if (i_6 u>= i_7)
    i_2 = i_7

int32_t i_4 = *(eax + 0x70)
int32_t i_5 = *(ecx + 0x70)
int32_t i_3 = i_4

if (i_4 u>= i_5)
    i_3 = i_5

int32_t edi_3 = var_10_1 << 4
int32_t eax_1 = sub_745f3f(edi_3)
int32_t var_8_1

if (eax_1 == 0)
    var_8_1 = 0
else
    sub_61cdd0(eax_1, 0x10, var_10_1, sub_52e900)
    var_8_1 = eax_1

int32_t result

if (var_8_1 != 0)
    int32_t eax_4 = *(arg1[1] + 0x68)
    int32_t eax_6 = sub_745f3f(eax_4 << 4)
    int32_t var_10_3
    
    if (eax_6 == 0)
        var_10_3 = 0
    else
        sub_61cdd0(eax_6, 0x10, eax_4, sub_52e900)
        var_10_3 = eax_6
    
    if (var_10_3 != 0)
        __builtin_memset(__builtin_memset(var_8_1, 0, edi_3 u>> 2 << 2), 0, edi_3 & 3)
        int32_t ecx_8 = *(arg1[1] + 0x68) << 4
        __builtin_memset(__builtin_memset(var_10_3, 0, ecx_8 u>> 2 << 2), 0, ecx_8 & 3)
        void* eax_9 = arg1[1]
        
        if (*(eax_9 + 0x10) != 0 && *(*arg1 + 0x10) != 0)
            *(eax_9 + 0x10) = 0
            *(*arg1 + 0x10) = 0
        
        int32_t i_1 = i_3
        int32_t var_c_3 = 0
        
        if (i_1 u> 0)
            do
                int32_t edi_8 = 0
                
                if (i_2 u> 0)
                    do
                        (*(**arg1 + 4))(edi_8, var_c_3, var_8_1)
                        (*(*arg1[1] + 8))(edi_8, var_c_3, var_8_1)
                        edi_8 += 1
                    while (edi_8 u< i_2)
                
                int32_t i = i_2
                
                if (i_2 u< *(arg1[1] + 0x6c))
                    do
                        (*(*arg1[1] + 8))(i, var_c_3, var_10_3)
                        i += 1
                    while (i u< *(arg1[1] + 0x6c))
                
                var_c_3 += 1
                i_1 = i_3
            while (var_c_3 u< i_1)
        
        void* eax_16 = arg1[1]
        
        if (i_1 u< *(eax_16 + 0x70))
            int32_t eax_17 = *(eax_16 + 0x6c)
            
            do
                int32_t edi_9 = 0
                
                if (eax_17 u> 0)
                    do
                        (*(*arg1[1] + 8))(edi_9, i_1, var_10_3)
                        eax_17 = *(arg1[1] + 0x6c)
                        edi_9 += 1
                    while (edi_9 u< eax_17)
                
                i_1 += 1
            while (i_1 u< *(arg1[1] + 0x70))
        
        j__free(var_8_1)
        j__free(var_10_3)
        result = 0
    else
        j__free(var_8_1)
        result = 0x80004005
else
    result = 0x80004005

return result
