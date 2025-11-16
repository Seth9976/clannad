// 函数: sub_40a6ee
// 地址: 0x40a6ee
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
uint32_t __security_cookie_1 = __security_cookie
int32_t** var_5c = arg5
int32_t esi
int32_t var_3dc = esi
int32_t edi
int32_t var_3e0 = edi
void var_24
void* var_3e4 = &var_24
int32_t ecx_8 = *arg1
int32_t* var_3e8 = arg1
int32_t** esp_1 = &var_3e8
int32_t var_54 = 0
int32_t* var_4c = nullptr
int32_t* var_40
__builtin_memset(&var_40, 0, 0x14)
int32_t* result_1 = (*(ecx_8 + 0x20))(var_3e8, var_3e4)
int32_t* result = result_1
int32_t* var_34
int32_t* var_30
int32_t* var_3c
int32_t* var_38

if (result_1 s< 0)
label_40aaa8:
    int32_t* eax_35 = var_38
    
    if (eax_35 != 0)
        int32_t ecx_30 = *eax_35
        *(esp_1 - 4) = eax_35
        (*(ecx_30 + 8))()
        var_38 = nullptr
    
    int32_t* eax_36 = var_40
    
    if (eax_36 != 0)
        int32_t ecx_31 = *eax_36
        *(esp_1 - 4) = eax_36
        (*(ecx_31 + 8))()
        var_40 = nullptr
    
    int32_t* eax_37 = var_3c
    
    if (eax_37 != 0)
        int32_t ecx_32 = *eax_37
        *(esp_1 - 4) = eax_37
        (*(ecx_32 + 8))()
        var_3c = nullptr
else
    int32_t var_3ec_1 = 4
    int32_t i = 4
    void* const edi_1 = &data_ab54f8
    void* esi_1 = &var_24
    bool cond:2_1 = false
    
    while (i != 0)
        int32_t temp1_1 = *esi_1
        int32_t temp2_1 = *edi_1
        cond:2_1 = temp1_1 != temp2_1
        esi_1 += 4
        edi_1 += 4
        i -= 1
        
        if (temp1_1 != temp2_1)
            break
    
    int32_t* var_3f0
    
    if (cond:2_1)
        int32_t var_3ec_14 = 4
        int32_t i_1 = 4
        void* const edi_5 = &data_ab5528
        void* esi_10 = &var_24
        bool cond:4_1 = false
        
        while (i_1 != 0)
            int32_t temp3_1 = *esi_10
            int32_t temp4_1 = *edi_5
            cond:4_1 = temp3_1 != temp4_1
            esi_10 += 4
            edi_5 += 4
            i_1 -= 1
            
            if (temp3_1 != temp4_1)
                break
        
        if (not(cond:4_1))
            int32_t ecx_27 = *arg1
            int32_t var_7c
            int32_t* var_3ec_15 = &var_7c
            int32_t var_80
            var_3f0 = &var_80
            int32_t* result_6 = (*(ecx_27 + 0x18))(arg1, var_3f0, var_3ec_15)
            esp_1 = &var_3e8
            result = result_6
            
            if (result_6 s>= 0)
                if (var_80 u>= 0x40)
                    int32_t esi_11 = var_7c
                    int32_t var_3ec_16 = 0x10
                    int32_t var_3ec_17 = arg2
                    void var_100
                    var_3f0 = &var_100
                    __builtin_memcpy(&var_100, esi_11, 0x40)
                    j_sub_4021aa(arg2)
                    esp_1 = &var_3e8
                else
                    result = 0x80004005
            
            goto label_40aaa8
        
        int32_t var_3ec_18 = 4
        int32_t i_2 = 4
        esp_1 = &var_3e8
        void* const edi_6 = &data_ab5518
        void* esi_12 = &var_24
        bool cond:7_1 = false
        
        while (i_2 != 0)
            int32_t temp5_1 = *esi_12
            int32_t temp6_1 = *edi_6
            cond:7_1 = temp5_1 != temp6_1
            esi_12 += 4
            edi_6 += 4
            i_2 -= 1
            
            if (temp5_1 != temp6_1)
                break
        
        if (cond:7_1)
            goto label_40aaa8
        
        int32_t var_3ec_19 = 0x10
        void var_c0
        __builtin_memcpy(&var_c0, arg2, 0x40)
        int32_t eax_31 = *arg1
        int32_t var_70
        int32_t* var_3ec_20 = &var_70
        var_3f0 = arg1
        (*(eax_31 + 0x28))(var_3f0, var_3ec_20)
        esp_1 = &var_3e8
        int32_t* edi_7 = nullptr
        
        if (var_70 u<= 0)
            goto label_40aaa8
        
        do
            int32_t eax_32 = *arg1
            int32_t** var_3ec_21 = &var_34
            var_3f0 = edi_7
            int32_t* result_7 = (*(eax_32 + 0x2c))(arg1, var_3f0, var_3ec_21)
            esp_1 = &var_3e8
            result = result_7
            
            if (result_7 s< 0)
                goto label_40aaa8
            
            var_3f0 = arg8
            int32_t* result_8 =
                sub_40a6ee(var_34, &var_c0, arg3, arg4, var_5c, arg6, arg7, var_3f0, arg9)
            esp_1 = &var_3e8
            result = result_8
            
            if (result_8 s< 0)
                goto label_40aaa8
            
            int32_t* eax_33 = var_34
            
            if (eax_33 != 0)
                (*(*eax_33 + 8))(eax_33)
                esp_1 = &var_3e8
                var_34 = nullptr
            
            edi_7 += 1
        while (edi_7 u< var_70)
        
        goto label_40aa9b
    
    void var_1c8
    sub_408604(&var_1c8)
    int32_t var_408_1
    __builtin_memset(&var_408_1, 0, 0x20)
    int32_t* var_74 = nullptr
    int32_t var_78 = 0
    int32_t* var_3ec_2
    int32_t var_58
    int32_t* result_2 = sub_4091de(arg1, arg3, arg4, &var_38, &var_40, &var_3c, &var_58, &var_4c, 
        nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, var_3f0, var_3ec_2)
    esp_1 = &var_3e8
    result = result_2
    
    if (result_2 == 0x88760b5a)
        result = nullptr
    label_40aa9b:
        int32_t* eax_34 = var_4c
        
        if (eax_34 != 0)
            int32_t ecx_29 = *eax_34
            *(esp_1 - 4) = eax_34
            (*(ecx_29 + 8))()
        
        goto label_40aaa8
    
    if (result_2 s< 0)
        goto label_40aa9b
    
    int32_t* esi_2 = var_4c
    int32_t eax_1 = *esi_2
    int16_t var_3d0[0x104]
    int16_t (* var_3ec_3)[0x104] = &var_3d0
    var_3f0 = esi_2
    (*(eax_1 + 0x1c))(var_3f0, var_3ec_3)
    sub_408645(&var_1c8, &var_3d0)
    int32_t eax_2 = *esi_2
    int32_t** var_3ec_5 = &var_30
    var_3f0 = esi_2
    int32_t* result_3 = (*(eax_2 + 0x34))(var_3f0, var_3ec_5)
    esp_1 = &var_3e8
    result = result_3
    
    if (result_3 s< 0)
        goto label_40aa9b
    
    int32_t* eax_3 = var_30
    int32_t ecx_11 = *eax_3
    int32_t var_3ec_6 = 0x800
    var_3f0 = &var_54
    int32_t var_3f4_1 = 0
    int32_t var_3f8_1 = 0
    int32_t* result_4 = (*(ecx_11 + 0x2c))(eax_3, 0, 0, var_3f0, var_3ec_6)
    esp_1 = &var_3e8
    result = result_4
    
    if (result_4 s< 0)
        goto label_40aa9b
    
    int32_t* eax_5 = (*(*esi_2 + 0x14))(esi_2)
    int32_t* var_68 = eax_5
    int32_t var_2c_1 = 0
    
    if (eax_5 u> 0)
        do
            int32_t var_108
            int32_t esi_5 = var_108 * var_2c_1 + var_54
            void* var_140
            int32_t* eax_8 = zx.d(*(var_140 + 2)) + esi_5
            var_3f0 = eax_8
            j_sub_4018cf(eax_8, var_3f0, arg2)
            void* var_134
            
            if (var_134 != 0)
                int32_t* edi_3 = zx.d(*(var_134 + 2)) + esi_5
                var_3f0 = edi_3
                j_sub_4019e2(edi_3, var_3f0, arg2)
                var_3f0 = edi_3
                j_sub_4014e9(var_3f0, edi_3)
            
            var_2c_1 += 1
        while (var_2c_1 u< var_68)
    
    int32_t* eax_11 = var_30
    (*(*eax_11 + 0x30))(eax_11)
    esp_1 = &var_3e8
    int32_t* eax_12 = var_30
    var_54 = 0
    
    if (eax_12 != 0)
        (*(*eax_12 + 8))(eax_12)
        esp_1 = &var_3e8
        var_30 = nullptr
    
    int32_t** edi_4 = var_5c
    
    if (*edi_4 != 0)
        int32_t* esi_6 = *arg6
        int32_t* var_3ec_13 = &var_58
        var_3f0 = &var_78
        int32_t* eax_14 = var_38
        int32_t eax_15 = (*(*eax_14 + 0xc))(eax_14, var_40, var_3c, var_58, arg4, &var_68, &var_5c, 
            &var_74, var_3f0, var_3ec_13)
        int32_t* eax_20 = (*(*esi_6 + 0xc))(esi_6, *arg7, *arg8, *arg9, var_4c, eax_15)
        int32_t* result_5 = sub_408a9b(*edi_4, eax_20)
        esp_1 = &var_3f0
        result = result_5
        
        if (result_5 s>= 0)
            int32_t* eax_21 = *edi_4
            
            if (eax_21 != 0)
                (*(*eax_21 + 8))(eax_21)
                esp_1 = &var_3f0
                *edi_4 = nullptr
            
            int32_t* eax_22 = *arg6
            
            if (eax_22 != 0)
                (*(*eax_22 + 8))(eax_22)
                esp_1 = &var_3f0
                *arg6 = nullptr
            
            int32_t* eax_23 = *arg7
            
            if (eax_23 != 0)
                (*(*eax_23 + 8))(eax_23)
                esp_1 = &var_3f0
                *arg7 = nullptr
            
            int32_t* eax_24 = *arg8
            
            if (eax_24 != 0)
                (*(*eax_24 + 8))(eax_24)
                esp_1 = &var_3f0
                *arg8 = 0
            
            *edi_4 = var_68
            *arg6 = var_5c
            *arg7 = var_74
            *arg8 = var_78
            *arg9 = var_58
        
        goto label_40aa9b
    
    *edi_4 = var_4c
    *arg6 = var_38
    *arg7 = var_40
    *arg8 = var_3c
    *arg9 = var_58
    var_38 = nullptr
    var_40 = nullptr
    var_3c = nullptr
int32_t* eax_38 = var_34

if (eax_38 != 0)
    int32_t ecx_33 = *eax_38
    *(esp_1 - 4) = eax_38
    (*(ecx_33 + 8))()
    var_34 = nullptr

if (var_54 != 0)
    int32_t* eax_39 = var_30
    int32_t ecx_34 = *eax_39
    *(esp_1 - 4) = eax_39
    (*(ecx_34 + 0x30))()

int32_t* eax_40 = var_30

if (eax_40 != 0)
    int32_t ecx_35 = *eax_40
    *(esp_1 - 4) = eax_40
    (*(ecx_35 + 8))()

sub_745f2b(__security_cookie_1)
*esp_1
esp_1[1]
return result
