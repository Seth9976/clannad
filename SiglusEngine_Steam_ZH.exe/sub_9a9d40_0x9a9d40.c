// 函数: sub_9a9d40
// 地址: 0x9a9d40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebp
void* var_4 = ebp
void* ecx
void* edx
ecx, edx = __chkstk(0x136c)
int32_t ebx = *(edx + 0x504)
void* __return_addr_3 = *(edx + 0x510)
void** result = nullptr
__return_addr = __return_addr_3
int32_t arg_28 = ebx
bool cond:0 = ebx != 0
void* arg_3c
void* arg_144
int32_t arg_24c[0x42]
int32_t arg_354[0x42]
int32_t arg_45c[0x42]

if (ebx s> 0)
    int32_t ecx_2
    int32_t edi_1
    edi_1, ecx_2 = __memfill_u32(&arg_144, 0xffffff38, ebx)
    int32_t ecx_4
    int32_t edi_2
    edi_2, ecx_4 = __memfill_u32(&arg_3c, 0xffffff38, ebx)
    __builtin_memset(&arg_24c, 0, ebx << 2)
    cond:0 = ebx != 0
    
    if (ebx s> 0)
        int32_t ecx_7
        int32_t edi_3
        edi_3, ecx_7 = __memfill_u32(&arg_354, 1, ebx)
        cond:0 = ebx != 0
        __builtin_memset(&arg_45c, 0xffffffff, ebx << 2)

void* arg_4
void arg_564
int32_t eax_2

if (cond:0)
    int32_t i = 0
    
    if (ebx - 1 s> 0)
        char* edi_4 = &arg_564
        int32_t ebx_1 = 0
        
        do
            int32_t eax_5 = sub_9a9120(edx, arg_4, edx, *(edx + (i << 2)), *(edx + (i << 2) + 4), 
                edi_4, *(edx + 0x508), __return_addr)
            i += 1
            ebx_1 += eax_5
            edi_4 = &edi_4[0x38]
        while (i s< ebx - 1)
        
        __return_addr_3 = __return_addr
        ebx = arg_28
        eax_2 = ebx_1
        goto label_9a9e43
else
    int32_t eax_1 = *(edx + 0x508)
    eax_2 = sub_9a9120(eax_1, arg_4, edx, 0, eax_1, &arg_564, eax_1, __return_addr_3)
label_9a9e43:
    
    if (eax_2 == 0)
        return nullptr
    
    var_4 = 0xffffff38
    arg_4 = 0xffffff38
    sub_9a8e60(&var_4, ebx - 1, &arg_564, &var_4, &arg_4, __return_addr_3)
    void* eax_7 = var_4
    int32_t esi = 2
    void* edi_5 = arg_4
    arg_144 = eax_7
    arg_3c = eax_7
    void* arg_40 = edi_5
    void** result_1
    void* arg_10
    void* esi_1
    
    if (ebx s<= 2)
        esi_1 = var_4
    else
        void* edx_4 = edx
        void* eax_8 = edx_4 + 0x210
        arg_4 = eax_8
        
        do
            int32_t eax_9 = *eax_8
            int32_t i_2 = arg_24c[eax_9]
            int32_t i_1 = arg_354[eax_9]
            
            if (arg_45c[i_2] != i_1)
                int32_t edi_6 = *(edx_4 + (i_2 << 2) + 0x208)
                int32_t edx_5 = *(edx_4 + (i_1 << 2) + 0x208)
                void* const __return_addr_1 = __return_addr
                arg_45c[i_2] = i_1
                arg_10 = *(__return_addr_1 + (i_2 << 2) + 0x344)
                int32_t edi_8 = *(__return_addr_1 + (i_1 << 2) + 0x344)
                void* edi_9 = (&arg_144)[i_2]
                void* arg_18
                
                if (edi_9 s>= 0)
                    int32_t __saved_edi
                    arg_18 = &(&__saved_edi)[i_2 + 0x14]
                    int32_t ecx_14 = (&__saved_edi)[i_2 + 0x14]
                    
                    if (ecx_14 s>= 0)
                        edi_9 = (edi_9 + ecx_14) s>> 1
                else
                    edi_9 = (&arg_3c)[i_2]
                    arg_18 = &(&arg_3c)[i_2]
                    __return_addr_1 = __return_addr
                
                void** eax_10 = &(&arg_144)[i_1]
                void* eax_11 = *eax_10
                var_4 = eax_11
                
                if (eax_11 s>= 0)
                    int32_t ecx_16 = (&arg_3c)[i_1]
                    
                    if (ecx_16 s>= 0)
                        eax_11 = (eax_11 + ecx_16) s>> 1
                        var_4 = eax_11
                else
                    eax_11 = (&arg_3c)[i_1]
                    var_4 = eax_11
                
                if (edi_9 == 0xffffffff || eax_11 == 0xffffffff)
                    _exit(1)
                    noreturn
                
                int32_t eax_13 =
                    sub_9a8c40(eax_11, edi_8, arg_10, edi_9, eax_11, edx, arg_4, __return_addr_1)
                void** result_3
                int32_t eax_17
                int32_t eax_20
                void* ecx_25
                void** result_2
                
                if (eax_13 != 0)
                    void* arg_2c = 0xffffff38
                    void* eax_14 = arg_4
                    result_1 = 0xffffff38
                    result_3 = 0xffffff38
                    arg_10 = 0xffffff38
                    int32_t eax_16 = edi_6 * 7
                    eax_17 = sub_9a8e60(eax_16, *eax_14 - edi_6, &arg_564 + (eax_16 << 3), &arg_2c, 
                        &result_1, __return_addr)
                    int32_t eax_18 = *arg_4
                    eax_20 = sub_9a8e60(&arg_564, edx_5 - eax_18, &arg_564 + eax_18 * 0x38, 
                        &result_3, &arg_10, __return_addr)
                    void** result_4 = result_3
                    result_3 = result_4
                    
                    if (eax_17 == 0)
                        edi_9 = arg_2c
                        result_2 = result_1
                    else
                        result_2 = result_4
                    
                    result_1 = result_2
                    
                    if (eax_20 == 0)
                        ecx_25 = arg_10
                    else
                        ecx_25 = var_4
                        result_3 = result_2
                
                if (eax_13 != 0 && (eax_17 == 0 || eax_20 == 0))
                    *arg_18 = edi_9
                    void* eax_22 = arg_144
                    
                    if (i_2 == 0)
                        eax_22 = edi_9
                    
                    void** result_5 = result_3
                    arg_144 = eax_22
                    (&arg_144)[esi] = result_2
                    (&arg_3c)[esi] = result_5
                    *eax_10 = ecx_25
                    void* eax_24 = arg_40
                    
                    if (i_1 == 1)
                        eax_24 = ecx_25
                    
                    arg_40 = eax_24
                    
                    if (result_1 s>= 0 || result_5 s>= 0)
                        int32_t ecx_26 = *arg_4
                        int32_t eax_26 = ecx_26 - 1
                        
                        if (eax_26 s>= 0)
                            while (arg_354[eax_26] == i_1)
                                arg_354[eax_26] = esi
                                int32_t temp4_1 = eax_26
                                eax_26 -= 1
                                
                                if (temp4_1 - 1 s< 0)
                                    break
                        
                        int32_t eax_27 = ecx_26 + 1
                        
                        if (eax_27 s< ebx)
                            while (arg_24c[eax_27] == i_2)
                                arg_24c[eax_27] = esi
                                eax_27 += 1
                                
                                if (eax_27 s>= ebx)
                                    break
                else
                    (&arg_3c)[esi] = 0xffffff38
                    (&arg_144)[esi] = 0xffffff38
                
                edx_4 = edx
            
            esi += 1
            eax_8 = arg_4 + 4
            arg_4 = eax_8
        while (esi s< ebx)
        
        esi_1 = arg_3c
    
    void* edx_13 = ecx
    void* ecx_29 = ((ebx << 2) + 7) & 0xfffffff8
    void* var_8_4 = ecx_29
    
    if (*(edx_13 + 0x48) + ecx_29 s> *(edx_13 + 0x4c))
        if (*(edx_13 + 0x44) != 0)
            int32_t* eax_31 = _malloc(8)
            edx_13 = ecx
            *(edx_13 + 0x50) += *(edx_13 + 0x48)
            eax_31[1] = *(edx_13 + 0x54)
            *eax_31 = *(edx_13 + 0x44)
            ecx_29 = var_8_4
            *(edx_13 + 0x54) = eax_31
        
        *(edx_13 + 0x4c) = ecx_29
        int32_t eax_32 = _malloc(ecx_29)
        edx_13 = ecx
        ecx_29 = var_8_4
        *(edx_13 + 0x44) = eax_32
        *(edx_13 + 0x48) = 0
    
    void* eax_33 = *(edx_13 + 0x48)
    result = *(edx_13 + 0x44) + eax_33
    bool cond:1_1 = arg_144 s< 0
    result_1 = result
    *(ecx + 0x48) = eax_33 + ecx_29
    
    if (not(cond:1_1))
        if (esi_1 s>= 0)
            esi_1 = (esi_1 + arg_144) s>> 1
        else
            esi_1 = arg_144
    
    *result = esi_1
    
    if (edi_5 s< 0)
        edi_5 = arg_40
    else if (arg_40 s>= 0)
        edi_5 = (edi_5 + arg_40) s>> 1
    
    result[1] = edi_5
    int32_t arg_14 = 2
    
    if (ebx s> 2)
        void* const __return_addr_2 = __return_addr
        void* ecx_35 = edx + 0x30c
        arg_10 = ecx_35
        var_4 = __return_addr_2 + 0x34c
        void* eax_36 = &result[2]
        bool cond:3_1
        
        do
            int32_t eax_37 = *(ecx_35 + 0xfc)
            int32_t esi_3 = *ecx_35
            int32_t edi_12 = *(__return_addr_2 + (eax_37 << 2) + 0x344)
            int32_t eax_39 = result[eax_37] & 0x7fff
            int32_t ebx_4 = (result[esi_3] & 0x7fff) - eax_39
            int32_t eax_41
            int32_t edx_15
            edx_15:eax_41 = sx.q(ebx_4)
            int32_t temp0_1 = divs.dp.d(sx.q(((eax_41 ^ edx_15) - edx_15) * (*var_4 - edi_12)), 
                *(__return_addr + (esi_3 << 2) + 0x344) - edi_12)
            int32_t eax_48
            
            if (ebx_4 s>= 0)
                eax_48 = eax_39 + temp0_1
            else
                eax_48 = eax_39 - temp0_1
            
            int32_t ecx_43 = (&arg_144)[arg_14]
            
            if (ecx_43 s>= 0)
                int32_t esi_4 = (&arg_3c)[arg_14]
                
                if (esi_4 s>= 0)
                    ecx_43 = (ecx_43 + esi_4) s>> 1
            else
                ecx_43 = (&arg_3c)[arg_14]
            
            if (ecx_43 s< 0 || eax_48 == ecx_43)
                *(eax_36 + (arg_14 << 2) - 8) = eax_48 | 0x8000
            else
                *(eax_36 + (arg_14 << 2) - 8) = ecx_43
            
            void* ecx_46 = arg_10
            var_4 += 4
            ecx_35 = ecx_46 + 4
            cond:3_1 = arg_14 + 1 s< arg_28
            __return_addr_2 = __return_addr
            arg_14 += 1
            result = result_1
            arg_10 = ecx_35
        while (cond:3_1)
return result
