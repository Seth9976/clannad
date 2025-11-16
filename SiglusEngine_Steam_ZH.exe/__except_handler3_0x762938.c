// 函数: __except_handler3
// 地址: 0x762938
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t* var_1c = &var_4
void* const ebx = arg2
int32_t result

if ((*(arg1 + 4) & 6) != 0)
    int32_t* var_20_4 = &var_4
    __local_unwind2(ebx, 0xffffffff)
    result = 1
else
    void* var_c = arg1
    int32_t var_8_1 = arg3
    *(ebx - 4) = &var_c
    int32_t esi_1 = *(ebx + 0xc)
    int32_t edi_1 = *(ebx + 8)
    
    if (__ValidateEH3RN(ebx) s<= 0)
        *(arg1 + 4) |= 8
    label_762a12:
        result = 1
    else
        while (true)
            if (esi_1 == 0xffffffff)
                goto label_762a12
            
            int32_t eax_4 = *(edi_1 + esi_1 * 0xc + 4)
            
            if (eax_4 != 0)
                int32_t eax_6 = eax_4(ebp_1, esi_1, var_1c)
                ebx = ebp_1[3]
                
                if (eax_6 != 0)
                    if (eax_6 s< 0)
                        result = 0
                        break
                    
                    sub_766530(ebp_1[2], 1)
                    int32_t edi_3 = *(ebx + 8)
                    sub_75aaf0(ebx)
                    ebp_1 = ebx + 0x10
                    __local_unwind2(ebx, esi_1)
                    int32_t ecx_3 = esi_1 * 3
                    __NLG_Notify(*(edi_3 + (ecx_3 << 2) + 8), ebp_1, 1)
                    *(ebx + 0xc) = *(edi_3 + (ecx_3 << 2))
                    ebx = nullptr
                    esi_1 = 0
                    (*(edi_3 + (ecx_3 << 2) + 8))()
            
            edi_1 = *(ebx + 8)
            esi_1 = *(edi_1 + esi_1 * 0xc)

*var_1c
return result
