// 函数: sub_4def10
// 地址: 0x4def10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg1
char eax = (*(ebx + 0x1a0)).b
int32_t edi
int32_t var_4c = edi
void* edi_1 = *(ebx + 0x1c0)
void* var_10 = edi_1

if (*(ebx + 0x118) != 0 && *(edi_1 + 0x28) == 0)
    int32_t result = sub_4deea0()
    
    if (result == 0)
        return result

if (*(edi_1 + 8) == 0)
    int32_t* eax_4 = *(ebx + 0x18)
    int32_t var_20_1 = ebx
    int32_t var_30 = *eax_4
    int32_t edx_1 = eax_4[1]
    int32_t eax_5 = *(edi_1 + 0xc)
    int32_t edx_2 = *(edi_1 + 0x14)
    int32_t var_40 = *(edi_1 + 0x18)
    int32_t edx_4 = *(edi_1 + 0x1c)
    int32_t edx_5 = *(edi_1 + 0x20)
    int32_t ecx_3 = *(edi_1 + 0x24)
    arg1 = eax_5
    int32_t eax_6 = *(edi_1 + 0x10)
    int32_t var_8_1 = 0
    
    if (*(ebx + 0x168) s> 0)
        void* var_c_1 = ebx + 0x16c
        bool cond:4_1
        
        do
            int16_t* ecx_6 = *(arg2 + (var_8_1 << 2))
            int32_t ecx_7 = *var_c_1
            void* esi_1 = *(edi_1 + (*(*(ebx + (ecx_7 << 2) + 0x150) + 0x14) << 2) + 0x2c)
            int32_t var_28
            int32_t var_24
            int32_t ecx_9
            
            if (eax_6 s< 8)
                if (sub_4de6a0(&var_30, arg1, eax_6, 0) == 0)
                    return 0
                
                eax_6 = var_24
                arg1 = var_28
                
                if (eax_6 s>= 8)
                    goto label_4df011
                
                ecx_9 = 1
                goto label_4df043
            
        label_4df011:
            uint32_t edx_13 = zx.d((arg1 s>> (eax_6.b - 8)).b)
            int32_t ecx_11 = *(esi_1 + (edx_13 << 2) + 0x90)
            uint32_t esi_2
            
            if (ecx_11 == 0)
                ecx_9 = 9
            label_4df043:
                esi_2 = sub_4de7c0(&var_30, arg1, eax_6, esi_1, ecx_9)
                
                if (esi_2 s< 0)
                    return 0
                
                eax_6 = var_24
                arg1 = var_28
            else
                esi_2 = zx.d(*(edx_13 + esi_1 + 0x490))
                eax_6 -= ecx_11
            
            if (esi_2 != 0)
                if (eax_6 s< esi_2)
                    if (sub_4de6a0(&var_30, arg1, eax_6, esi_2) == 0)
                        return 0
                    
                    eax_6 = var_24
                    arg1 = var_28
                
                eax_6 -= esi_2
                uint32_t edx_18 = ((1 << esi_2.b) - 1) & arg1 s>> eax_6.b
                edi_1 = var_10
                
                if (edx_18 s>= *((esi_2 << 2) + &data_acdde0))
                    esi_2 = edx_18
                else
                    esi_2 = *((esi_2 << 2) + &data_acde20) + edx_18
            
            int32_t edx_20 = (&var_40)[ecx_7] + esi_2
            int32_t __saved_ebp
            (&__saved_ebp)[ecx_7 - 0xf] = edx_20
            var_c_1 += 4
            *ecx_6 = (edx_20 << eax).w
            cond:4_1 = var_8_1 + 1 s< *(ebx + 0x168)
            var_8_1 += 1
        while (cond:4_1)
    
    int32_t* ebx_1 = *(ebx + 0x18)
    *ebx_1 = var_30
    ebx_1[1] = edx_1
    int32_t ecx_22 = var_40
    *(edi_1 + 0x10) = eax_6
    *(edi_1 + 0x14) = edx_2
    *(edi_1 + 0x18) = ecx_22
    *(edi_1 + 0xc) = arg1
    *(edi_1 + 0x1c) = edx_4
    *(edi_1 + 0x20) = edx_5
    *(edi_1 + 0x24) = ecx_3

*(edi_1 + 0x28) -= 1
return 1
