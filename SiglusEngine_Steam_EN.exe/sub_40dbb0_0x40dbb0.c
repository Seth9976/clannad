// 函数: sub_40dbb0
// 地址: 0x40dbb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* ecx = *(arg1 + 0x1c)
int32_t i = 0
int32_t var_10 = 0
int32_t edi = 0xffffffff
int32_t* ebx = arg2
int32_t edx
int32_t* result = sub_5f1ac0(arg1, edx, ecx, 1, 0x460)
int32_t* result_1 = result
int32_t eax_2 = sub_410bd0(ebx, 5)
*result = eax_2

if (eax_2 s> 0)
    arg1 = &result[1]
    
    do
        int32_t eax_3 = sub_410bd0(ebx, 4)
        *arg1 = eax_3
        
        if (edi s< eax_3)
            edi = eax_3
        
        i += 1
        arg1 += 4
    while (i s< *result)

int32_t edi_1 = edi + 1
arg1 = nullptr
int32_t var_4 = edi_1

if (edi_1 s> 0)
    void* esi = &result[0x40]
    arg2 = &result[0x50]
    
    while (true)
        *(esi - 0x80) = sub_410bd0(ebx, 3) + 1
        int32_t eax_7 = sub_410bd0(ebx, 2)
        *(esi - 0x40) = eax_7
        int32_t eax_9
        
        if (eax_7 s>= 0)
            if (eax_7 != 0)
                *esi = sub_410bd0(ebx, 8)
            
            eax_9 = *esi
        
        if (eax_7 s< 0 || eax_9 s< 0 || eax_9 s>= *(ecx + 0x18))
        label_40ddc8:
            sub_40d9b0(result)
            return 0
        
        int32_t ebp = 0
        
        if (1 << (*(esi - 0x40)).b s> 0)
            void* edi_2 = arg2
            
            while (true)
                int32_t eax_11 = sub_410bd0(ebx, 8) - 1
                *edi_2 = eax_11
                
                if (eax_11 s< 0xffffffff || eax_11 s>= *(ecx + 0x18))
                    result = result_1
                    goto label_40ddc8
                
                ebp += 1
                edi_2 += 4
                
                if (ebp s< 1 << (*(esi - 0x40)).b)
                    continue
                
                edi_1 = var_4
                break
        
        result = result_1
        esi += 4
        bool cond:7_1 = arg1 + 1 s< edi_1
        arg1 += 1
        arg2 += 0x20
        
        if (not(cond:7_1))
            break

result[0xd0] = sub_410bd0(ebx, 2) + 1
int32_t eax_16 = sub_410bd0(ebx, 4)
int32_t edi_3 = 0
arg1 = nullptr

if (*result s> 0)
    arg2 = &result[1]
    bool cond:5_1
    
    do
        int32_t eax_20 = var_10 + result[*arg2 + 0x20]
        var_10 = eax_20
        
        if (edi_3 s< eax_20)
            void* esi_1 = &result[edi_3 + 0xd3]
            
            do
                int32_t eax_22 = sub_410bd0(ebx, eax_16)
                *esi_1 = eax_22
                
                if (eax_22 s< 0)
                    goto label_40ddc8
                
                if (eax_22 s>= 1 << eax_16.b)
                    goto label_40ddc8
                
                edi_3 += 1
                esi_1 += 4
            while (edi_3 s< var_10)
        
        cond:5_1 = arg1 + 1 s< *result
        arg1 += 1
        arg2 += 4
    while (cond:5_1)

result[0xd1] = 0
result[0xd2] = 1 << eax_16.b
return result
