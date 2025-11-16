// 函数: sub_44c3f2
// 地址: 0x44c3f2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
uint32_t result = 0
bool cond:0 = arg1[0xf] != 4
int32_t* eax = arg1[2]
arg1[2] = arg1[3]

if (not(cond:0))
    result = 0x8876086c
else if ((arg3 & 7) == arg3)
    int32_t eax_5 = arg3 & 5
    char temp1_1 = eax_5.b
    eax_5.b = neg.b(eax_5.b)
    int32_t edi
    int32_t var_14_1 = edi
    int32_t ecx_2 = arg3 & 3
    char temp2_1 = ecx_2.b
    ecx_2.b = neg.b(ecx_2.b)
    void* esi_4 = zx.d(*(arg1 + 0x42)) * 0xb4 + arg1[0x29]
    int32_t eax_13 = (((sbb.d(eax_5, eax_5, temp1_1 != 0) + 1) & 1) << 1
        | ((sbb.d(ecx_2, ecx_2, temp2_1 != 0) + 1) & 1)) << 4 | (not.d(arg3 << 3) & 8)
        | (arg1[0x46] & 0xffffffc7)
    arg1[0x46] = eax_13
    
    if ((eax_13.b & 8) == 0)
    label_44c642:
        __builtin_memset(esi_4 + 0x44, 0, 0x44)
        int32_t ecx_31 = zx.d(*(esi_4 + 0x3c)) * 0x68
        __builtin_memset(__builtin_memset(*(esi_4 + 0x40), 0, ecx_31 u>> 2 << 2), 0, ecx_31 & 3)
        
        if (arg2 != 0)
            *arg2 = *(esi_4 + 0x34)
        
        void* eax_30 = arg1[0xe]
        
        if (eax_30 != 0)
            *(eax_30 + 8) += 1
            *(arg1[0xe] + 0xc) = arg1
        
        arg1[0xf] = 4
    else
        uint32_t result_1 = sub_44bc80(arg1, *(esi_4 + 0x9c), esi_4 + 0xa4)
        result = result_1
        
        if (result_1 s>= 0)
            uint32_t result_2 = sub_44bdf1(arg1, *(esi_4 + 0xa0), esi_4 + 0xac)
            result = result_2
            
            if (result_2 s>= 0)
                if ((arg1[0x46].b & 0x10) == 0)
                label_44c503:
                    
                    if ((arg1[0x46].b & 0x20) == 0)
                    label_44c53a:
                        
                        if (*(esi_4 + 0x88) != 0)
                        label_44c627:
                            int32_t* eax_28 = *(esi_4 + 0x88)
                            uint32_t result_9 = (*(*eax_28 + 0x10))(eax_28)
                            result = result_9
                            
                            if (result_9 s>= 0)
                                goto label_44c642
                        else
                            __builtin_memset(esi_4 + 0x44, 0, 0x44)
                            int32_t ecx_19 = zx.d(*(esi_4 + 0x3c)) * 0x68
                            __builtin_memset(
                                __builtin_memset(*(esi_4 + 0x40), 0, ecx_19 u>> 2 << 2), 0, 
                                ecx_19 & 3)
                            int32_t* eax_20 = arg1[3]
                            uint32_t result_7 = (*(*eax_20 + 0xf0))(eax_20)
                            result = result_7
                            
                            if (result_7 s>= 0)
                                arg1[0xf] = 1
                                sub_416380(1)
                                int32_t i = 0
                                
                                if (*(esi_4 + 0x34) u> 0)
                                    do
                                        (*(*arg1 + 0x108))(arg1, i)
                                        (*(*arg1 + 0x110))(arg1)
                                        i += 1
                                    while (i u< *(esi_4 + 0x34))
                                
                                sub_416380(0)
                                int32_t* eax_23 = arg1[3]
                                uint32_t result_8 = (*(*eax_23 + 0xf4))(eax_23, esi_4 + 0x88)
                                result = result_8
                                
                                if (result_8 s>= 0)
                                    result_8.w = arg1[0x11].w
                                    arg1[0xf] = 0
                                    
                                    if (result_8.w != 0xffff)
                                        int32_t edx_2
                                        edx_2.b = arg1[0x10].w != *(arg1 + 0x42)
                                        sub_442a01(arg1, 
                                            zx.d(*(zx.d(result_8.w) * 0x38 + *(esi_4 + 0x38)
                                                + 0x34)), 
                                            0xffffffff, edx_2 - 1)
                                        result = 0
                                    
                                    arg1[0x11].w = 0xffff
                                    goto label_44c627
                                
                                int32_t* eax_24 = *(esi_4 + 0x88)
                                
                                if (eax_24 != 0)
                                    (*(*eax_24 + 8))(eax_24)
                                    *(esi_4 + 0x88) = 0
                    else
                        int32_t* eax_18 = *(esi_4 + 0x8c)
                        uint32_t result_5 = (*(*eax_18 + 0x10))(eax_18)
                        result = result_5
                        
                        if (result_5 s>= 0)
                            int32_t* eax_19 = *(esi_4 + 0x90)
                            uint32_t result_6 = (*(*eax_19 + 0x10))(eax_19)
                            result = result_6
                            
                            if (result_6 s>= 0)
                                goto label_44c53a
                else
                    int32_t* eax_16 = *(esi_4 + 0x94)
                    uint32_t result_3 = (*(*eax_16 + 0x10))(eax_16)
                    result = result_3
                    
                    if (result_3 s>= 0)
                        int32_t* eax_17 = *(esi_4 + 0x98)
                        uint32_t result_4 = (*(*eax_17 + 0x10))(eax_17)
                        result = result_4
                        
                        if (result_4 s>= 0)
                            goto label_44c503
else
    result = 0x8876086c

arg1[2] = eax
return result
