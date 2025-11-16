// 函数: sub_407d9b
// 地址: 0x407d9b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_10 = nullptr
int32_t* var_c = nullptr
int32_t edi
int32_t var_28 = edi
int32_t var_1c
char* var_14
int32_t result_1 = (*(*arg1 + 0x18))(arg1, &var_1c, &var_14)
int32_t* ebx = arg2
int32_t result = result_1

if (result_1 s< 0)
    goto label_407f26

if (var_1c u>= 1)
    char* eax_1 = var_14
    void* edx_1 = &eax_1[1]
    char i
    
    do
        i = *eax_1
        eax_1 = &eax_1[1]
    while (i != 0)
    int32_t eax_3 = sub_745f3f(eax_1 - edx_1 + 1)
    *ebx = eax_3
    
    if (eax_3 == 0)
    label_407eed:
        result = 0x8007000e
        goto label_407f26
    
    int32_t esi_3
    int32_t edi_2
    edi_2, esi_3 = __builtin_memcpy(eax_3, var_14, (eax_1 - edx_1 + 1) u>> 2 << 2)
    __builtin_memcpy(edi_2, esi_3, (eax_1 - edx_1 + 1) & 3)
    int32_t* esi_4 = arg1
    ebx[1] = 0
    int32_t var_18
    (*(*esi_4 + 0x28))(esi_4, &var_18)
    arg1 = nullptr
    
    if (var_18 u<= 0)
    label_407ed5:
        int32_t eax_11 = ebx[1]
        
        if (eax_11 u> 0)
            int32_t eax_13 = sub_745f3f(eax_11 << 4)
            ebx[2] = eax_13
            
            if (eax_13 == 0)
                goto label_407eed
            
            int32_t* eax_14 = var_10
            int32_t i_1 = 0
            
            if (ebx[1] u> 0)
                int32_t edx_2 = 0
                
                do
                    int32_t* edi_10 = ebx[2] + edx_2
                    *edi_10 = *eax_14
                    void* edi_11 = &edi_10[1]
                    void* esi_6 = &eax_14[1]
                    *edi_11 = *esi_6
                    void* edi_12 = edi_11 + 4
                    void* esi_7 = esi_6 + 4
                    *edi_12 = *esi_7
                    *(edi_12 + 4) = *(esi_7 + 4)
                    *eax_14 = 0
                    eax_14[3] = 0
                    eax_14 = eax_14[4]
                    i_1 += 1
                    edx_2 += 0x10
                while (i_1 u< ebx[1])
            
            goto label_407f20
    else
        while (true)
            int32_t result_2 = (*(*esi_4 + 0x2c))(esi_4, arg1, &var_c)
            result = result_2
            
            if (result_2 s< 0)
                goto label_407f26
            
            int32_t* eax_7 = sub_745f3f(0x14)
            int32_t* edi_8
            
            if (eax_7 == 0)
                edi_8 = nullptr
            else
                *eax_7 = 0
                void* edi_4 = &eax_7[1]
                *edi_4 = 0
                void* edi_5 = edi_4 + 4
                *edi_5 = 0
                *(edi_5 + 4) = 0
                eax_7[4] = 0
                edi_8 = eax_7
            
            if (edi_8 == 0)
                goto label_407eed
            
            int32_t result_3 = sub_407a63(var_c, edi_8)
            result = result_3
            
            if (result_3 s< 0 && result_3 != 0x88760b5a)
                break
            
            if (result_3 == 0x88760b5a)
                sub_407d7a(edi_8, 1)
            else
                ebx[1] += 1
                
                if (var_10 == 0)
                    var_10 = edi_8
                else
                    arg2[4] = edi_8
                
                arg2 = edi_8
            
            int32_t* eax_9 = var_c
            
            if (eax_9 != 0)
                (*(*eax_9 + 8))(eax_9)
                var_c = nullptr
            
            arg1 += 1
            
            if (arg1 u>= var_18)
                goto label_407ed5
    
label_407f20:
    
    if (result s< 0)
        goto label_407f26
else
    result = 0x80004005
label_407f26:
    int32_t var_2c_7 = *ebx
    ebx[1] = 0
    j__free(var_2c_7)
    *ebx = 0

if (var_10 != 0)
    sub_407d7a(var_10, 1)

return result
