// 函数: sub_44830b
// 地址: 0x44830b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
int32_t* ecx
ecx.w = esi[0x11].w
int32_t edi
int32_t var_18 = edi
char* result_1
char* result

if (ecx.w != 0xffff)
    result_1.w = *(esi + 0x42)
    int32_t edx_1
    edx_1.b = esi[0x10].w != result_1.w
    result_1, ecx = sub_442a01(esi, 
        zx.d(*(*(zx.d(result_1.w) * 0xb4 + esi[0x29] + 0x38) + zx.d(ecx.w) * 0x38 + 0x34)), 
        0xffffffff, edx_1 - 1)
    result = nullptr

result_1.w = *(esi + 0x42)
esi[0x11].w = 0xffff
bool cond:1_1 = esi[0xf] == 0
int32_t* edi_1 = esi[3]
arg1.w = result_1.w
int16_t var_8 = -1
char* var_c = esi[2]
esi[2] = edi_1

if (not(cond:1_1))
    result = 0x8876086c
else if (arg2 == 0)
label_4483e7:
    
    if (esi[0x40] == 0)
        result_1, ecx = (*(*edi_1 + 0x158))(edi_1, 0xac1380, &esi[0x40])
        result = result_1
    
    if (esi[0x40] != 0 || result s>= 0)
        if (esi[0x41] != 0 || (*(esi + 0x119) & 2) != 0)
        label_448493:
            int32_t* eax_16 = esi[0x41]
            result_1, ecx = (*(*eax_16 + 0x10))(eax_16)
            result = result_1
            
            if (result s>= 0)
                int32_t* eax_17 = esi[3]
                arg2 = nullptr
                char* eax_18 = (*(*eax_17 + 0x15c))(eax_17, esi[0x40])
                
                if (eax_18 s< 0)
                    arg2 = eax_18
                else
                    int32_t* eax_19 = esi[3]
                    eax_18 = (*(*eax_19 + 0x170))(eax_19, 0)
                    
                    if (eax_18 s< 0)
                        arg2 = eax_18
                    else
                        int32_t* eax_20 = esi[3]
                        eax_18 = (*(*eax_20 + 0x1ac))(eax_20, 0)
                        
                        if (eax_18 s< 0)
                            arg2 = eax_18
                        else
                            eax_18 = (*(*esi + 0x104))(esi, 0, 0)
                            
                            if (eax_18 s< 0)
                                arg2 = eax_18
                            else
                                esi[0xf] = 2
                                sub_416380(1)
                                int32_t ebx_2 = 0
                                
                                if (*(zx.d(*(esi + 0x42)) * 0xb4 + esi[0x29] + 0x34) u> 0)
                                    while (true)
                                        char* eax_25 = (*(*esi + 0x108))(esi, ebx_2)
                                        
                                        if (eax_25 s>= 0)
                                            int32_t* eax_26 = esi[3]
                                            void var_10
                                            eax_25 = (*(*eax_26 + 0x118))(eax_26, &var_10)
                                            
                                            if (eax_25 s>= 0)
                                                eax_25 = (*(*esi + 0x110))(esi)
                                                
                                                if (eax_25 s>= 0)
                                                    ebx_2 += 1
                                                    
                                                    if (ebx_2 u>= *(zx.d(*(esi + 0x42)) * 0xb4
                                                            + esi[0x29] + 0x34))
                                                        break
                                                    
                                                    continue
                                        
                                        arg2 = eax_25
                                        break
                                
                                sub_416380(0)
                                int32_t eax_31 = *esi
                                esi[0xf] = 4
                                eax_18 = (*(eax_31 + 0x114))(esi)
                                
                                if (eax_18 s< 0 && arg2 s>= 0)
                                    arg2 = eax_18
                
                int32_t* eax_32 = esi[0x41]
                result_1, ecx = (*(*eax_32 + 0x14))(eax_32)
                result = result_1
                
                if (result s>= 0)
                    goto label_4485d3
                
                if (arg2 s< 0)
                    result = arg2
                else
                    arg2 = result
                label_4485d3:
                    
                    if (arg2 s< 0)
                        result = arg2
        else
            int32_t* eax_8 = esi[3]
            result_1, ecx = (*(*eax_8 + 0xf0))(eax_8)
            result = result_1
            
            if (result s>= 0)
                int32_t* eax_9 = esi[3]
                result = (*(*eax_9 + 0x15c))(eax_9, esi[0x40])
                
                if (result s< 0)
                label_44856f:
                    int32_t* eax_30 = esi[3]
                    (*(*eax_30 + 0xf4))(eax_30, &esi[0x41])
                    result_1 = esi[0x41]
                    
                    if (result_1 != 0)
                        result_1, ecx = (*(*result_1 + 8))(result_1)
                        esi[0x41] = 0
                else
                    int32_t* eax_11 = esi[3]
                    result = (*(*eax_11 + 0x170))(eax_11, 0)
                    
                    if (result s< 0)
                        goto label_44856f
                    
                    int32_t* eax_13 = esi[3]
                    result = (*(*eax_13 + 0x1ac))(eax_13, 0)
                    
                    if (result s< 0)
                        goto label_44856f
                    
                    int32_t* eax_15 = esi[3]
                    result_1, ecx = (*(*eax_15 + 0xf4))(eax_15, &esi[0x41])
                    result = result_1
                    
                    if (result s>= 0)
                        goto label_448493
else
    int32_t __saved_ebx_2 = 1
    result_1 = sub_4441fb(esi, arg2)
    
    if (result_1 != 0)
        ecx.w = *(esi + 0x42)
        
        if (ecx.w != *(result_1 + 0x14))
            esi[0x11].w = 0xffff
            result_1.w = *(result_1 + 0x14)
            *(esi + 0x42) = result_1.w
        
        esi[0x2e] = esi[0x2d] + ((zx.d(*(esi + 0x42)) * esi[0x2b]) << 2)
        goto label_4483e7
    
    result = 0x8876086c

ecx.w = esi[0x11].w

if (ecx.w != 0xffff)
    result_1.w = *(esi + 0x42)
    int32_t edx_5
    edx_5.b = esi[0x10].w != result_1.w
    sub_442a01(esi, 
        zx.d(*(*(zx.d(result_1.w) * 0xb4 + esi[0x29] + 0x38) + zx.d(ecx.w) * 0x38 + 0x34)), 
        0xffffffff, edx_5 - 1)

int16_t eax_37 = arg1.w
ecx.w = var_8
*(esi + 0x42) = eax_37
int32_t eax_39 = zx.d(eax_37) * esi[0x2b]
esi[0x11].w = ecx.w
esi[2] = var_c
esi[0x2e] = esi[0x2d] + (eax_39 << 2)
return result
