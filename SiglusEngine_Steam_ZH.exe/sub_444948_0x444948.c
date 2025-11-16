// 函数: sub_444948
// 地址: 0x444948
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_1c = edi
int32_t result = 0
int32_t* var_8 = nullptr
int32_t eax_1

if (arg4 != 0)
    eax_1 = *(*(arg4 + 8) + (arg3 << 2))
else
    eax_1 = arg3

void* ebx = *(arg1 + 0x18) + eax_1 * 0x18

if (arg2 == 0)
label_4449f7:
    int32_t* eax_12 = *(ebx + 4)
    
    if (eax_12 != 0)
        (*(*eax_12 + 8))(eax_12)
        *(ebx + 4) = 0
    
    *(ebx + 4) = var_8
    
    if (arg4 != 0)
        for (int32_t* i = *(arg4 + 0x10); i != arg4; i = i[4])
            void* ecx_10 = *i
            
            if (ecx_10 != 0)
                void* esi_6 = *(ecx_10 + 0x18) + *(i[2] + (arg3 << 2)) * 0x18
                int32_t* eax_18 = *(ebx + 4)
                
                if (eax_18 != 0)
                    (*(*eax_18 + 4))(eax_18)
                
                int32_t* eax_19 = *(esi_6 + 4)
                
                if (eax_19 != 0)
                    (*(*eax_19 + 8))(eax_19)
                    *(esi_6 + 4) = 0
                
                *(esi_6 + 4) = *(ebx + 4)
else
    char* eax_4 = arg2
    void* esi_2 = &eax_4[1]
    int32_t ecx
    
    do
        ecx.b = *eax_4
        eax_4 = &eax_4[1]
    while (ecx.b != 0)
    int32_t* eax_6 = *(ebx + 4)
    int32_t eax_7
    
    if (eax_6 != 0)
        eax_7 = (*(*eax_6 + 0x10))(eax_6)
    
    if (eax_6 != 0 && eax_7 u>= eax_4 - esi_2 + 1)
        int32_t* eax_8 = *(ebx + 4)
        var_8 = eax_8
        
        if (eax_8 != 0)
            (*(*eax_8 + 4))(eax_8)
        label_4449cb:
            eax_8 = var_8
        
        int32_t esi_5
        int32_t edi_2
        edi_2, esi_5 =
            __builtin_memcpy((*(*eax_8 + 0xc))(eax_8), arg2, (eax_4 - esi_2 + 1) u>> 2 << 2)
        __builtin_memcpy(edi_2, esi_5, (eax_4 - esi_2 + 1) & 3)
        int32_t* eax_11 = var_8
        
        if (eax_11 != 0)
            (*(*eax_11 + 4))(eax_11)
        
        goto label_4449f7
    
    int32_t** var_20_3 = &var_8
    void* var_24_1 = eax_4 - esi_2 + 1
    int32_t result_1 = sub_458de2()
    result = result_1
    
    if (result_1 s>= 0)
        goto label_4449cb

int32_t* eax_21 = var_8

if (eax_21 != 0)
    (*(*eax_21 + 8))(eax_21)

return result
