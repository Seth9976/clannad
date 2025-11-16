// 函数: sub_40dd7c
// 地址: 0x40dd7c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t eax = *(arg1 + 0x268)
int32_t edi
int32_t var_5d0 = edi
int32_t var_48c = eax
int32_t var_488 = eax
int32_t var_490 = eax
bool cond:0 = *(arg1 + 8) != 0
int32_t* var_458 = nullptr
int32_t var_494 = *(arg1 + 0x240)
int32_t* var_45c = nullptr
int32_t var_474
__builtin_memset(&var_474, 0, 0x14)
int32_t* var_460

if (not(cond:0))
    sub_416380(1)
    int32_t* eax_2 = *(arg1 + 0x230)
    var_460 = (*(*eax_2 + 0x158))(eax_2, arg1 + 0xc, arg1 + 8)
    sub_416380(0)
    
    if (var_460 s< 0)
        *(arg1 + 8) = 0

int32_t* esi = arg2
int32_t* var_470
int32_t var_46c
int32_t var_468
int32_t var_464
int32_t result

if (esi u>= 0xffff || arg3 u>= 0xffff)
    result = 0x8876086c
else if (*(arg1 + 0x268) u>= esi)
label_40e025:
    
    if (*(arg1 + 0x240) u>= arg3)
    label_40e1b7:
        *(arg1 + 0x23c) = arg3
        int32_t* eax_42 = *(arg1 + 0x230)
        *(arg1 + 0x264) = esi
        void var_5c4
        result = (*(*eax_42 + 0x1c))(eax_42, &var_5c4)
        
        if (result s>= 0)
            int32_t* eax_44 = *(arg1 + 0x230)
            result = (*(*eax_44 + 0x18))(eax_44, &var_470)
            
            if (result s>= 0)
                if (data_b95b00 == *(arg1 + 0x230))
                    *(arg1 + 0x274) = data_b95b04
                    *(arg1 + 0x278) = data_b95b08
                else
                    int32_t* eax_47 = var_470
                    int32_t var_5c0
                    void var_454
                    result = (*(*eax_47 + 0x14))(eax_47, var_5c0, 0, &var_454)
                    
                    if (result s>= 0)
                        int32_t var_47c
                        int32_t var_478
                        int32_t var_2c
                        int32_t var_28
                        int32_t var_480
                        
                        if (var_2c != 0x1002 || var_28 u< 0x5144 || var_28 u> 0x5147)
                            int32_t var_484 = 0
                            int32_t* edi_19 = &var_480
                            *edi_19 = 0
                            void* edi_20 = &edi_19[1]
                            *edi_20 = 0
                            *(edi_20 + 4) = 0
                            int32_t* eax_49 = *(arg1 + 0x230)
                            
                            if ((*(*eax_49 + 0x1d8))(eax_49, 4, 0) s< 0)
                            label_40e2ef:
                                var_480 = 1
                                var_47c = 0xc
                                var_478 = 7
                                result = 0
                            else
                                int32_t* eax_51 = *(arg1 + 0x230)
                                
                                if ((*(*eax_51 + 0x1d8))(eax_51, 4, &var_460) s< 0)
                                    goto label_40e2ef
                                
                                int32_t* eax_53 = var_460
                                result = (*(*eax_53 + 0x18))(eax_53, 1)
                                
                                if (result s>= 0)
                                    result = 1
                                    bool cond:2_1 = false
                                    
                                    while (not(cond:2_1))
                                        int32_t* eax_55 = var_460
                                        result = (*(*eax_55 + 0x1c))(eax_55, &var_484, 0x10, 1)
                                        cond:2_1 = result == 0
                                        
                                        if (result s< 0)
                                            break
                                
                                int32_t* eax_57 = var_460
                                (*(*eax_57 + 8))(eax_57)
                                
                                if (result s< 0)
                                    goto label_40e2ef
                            
                            if (var_480 == 0)
                                var_47c = 0
                                var_478 = 0
                            
                            int32_t ecx_46 = *(arg1 + 0x274)
                            
                            if (*(arg1 + 0x278) u> ecx_46)
                                *(arg1 + 0x278) = ecx_46
                        else
                            var_480 = 0
                            var_47c = 0
                            var_478 = 0
                        data_b95b04 = var_47c
                        data_b95b08 = var_478
                        *(arg1 + 0x274) = var_47c
                        int32_t eax_60 = *(arg1 + 0x230)
                        *(arg1 + 0x278) = var_478
                        data_b95b00 = eax_60
    else
        uint32_t eax_26
        
        if ((*(arg1 + 0x218) & 2) != 0)
            eax_26 = sub_40c0e8(arg1 + 0x244, arg3, *(arg1 + 0x23c), &var_494)
        
        if ((*(arg1 + 0x218) & 2) != 0 && eax_26 == 0)
            result = 0x8007000e
        else
            if ((*(arg1 + 0x218) & 0x20) != 0)
                goto label_40e1b7
            
            int32_t* eax_27 = *(arg1 + 0x230)
            result = (*(*eax_27 + 0x68))(eax_27, *(arg1 + 0x238) * arg3, *(arg1 + 0x228), 
                *(arg1 + 4), *(arg1 + 0x220), &var_458, 0)
            
            if (result s>= 0)
                if (*(arg1 + 0x23c) u<= 0)
                    goto label_40e18d
                
                int32_t* eax_29 = *(arg1 + 0x234)
                result = (*(*eax_29 + 0x2c))(eax_29, 0, 0, &var_46c, 0x800)
                
                if (result s>= 0)
                    int32_t* eax_31 = var_458
                    result = (*(*eax_31 + 0x2c))(eax_31, 0, 0, &var_468, 0x800)
                    
                    if (result s>= 0)
                        int32_t ecx_25 = *(arg1 + 0x238) * *(arg1 + 0x23c)
                        int32_t esi_5
                        int32_t edi_13
                        edi_13, esi_5 = __builtin_memcpy(var_468, var_46c, ecx_25 u>> 2 << 2)
                        __builtin_memcpy(edi_13, esi_5, ecx_25 & 3)
                        int32_t edx_13 = *(arg1 + 0x23c)
                        int32_t edi_14 = *(arg1 + 0x238)
                        int32_t ecx_31 = (arg3 - edx_13) * edi_14
                        __builtin_memset(
                            __builtin_memset(edi_14 * edx_13 + var_468, 0, ecx_31 u>> 2 << 2), 0, 
                            ecx_31 & 3)
                        int32_t* eax_34 = var_458
                        result = (*(*eax_34 + 0x30))(eax_34)
                        
                        if (result s>= 0)
                            int32_t* eax_36 = *(arg1 + 0x234)
                            var_468 = 0
                            result = (*(*eax_36 + 0x30))(eax_36)
                            
                            if (result s>= 0)
                                var_46c = 0
                                esi = arg2
                            label_40e18d:
                                int32_t* eax_38 = *(arg1 + 0x234)
                                
                                if (eax_38 != 0)
                                    (*(*eax_38 + 8))(eax_38)
                                    *(arg1 + 0x234) = nullptr
                                
                                int32_t* eax_39 = var_458
                                var_458 = nullptr
                                *(arg1 + 0x234) = eax_39
                                *(arg1 + 0x240) = arg3
                                goto label_40e1b7
else
    int32_t* eax_4 = *(arg1 + 0x230)
    result = (*(*eax_4 + 0x6c))(eax_4, esi * 6, *(arg1 + 0x224), 0x65, *(arg1 + 0x21c), &var_45c, 0)
    
    if (result s>= 0)
        if (*(arg1 + 0x264) u<= 0)
            goto label_40df5d
        
        int32_t* eax_6 = *(arg1 + 0x248)
        result = (*(*eax_6 + 0x2c))(eax_6, 0, 0, &var_474, 0x800)
        
        if (result s>= 0)
            int32_t* eax_8 = var_45c
            result = (*(*eax_8 + 0x2c))(eax_8, 0, 0, &var_464, 0x800)
            
            if (result s>= 0)
                int32_t ecx_4 = *(arg1 + 0x264) * 6
                int32_t esi_2
                int32_t edi_3
                edi_3, esi_2 = __builtin_memcpy(var_464, var_474, ecx_4 u>> 2 << 2)
                __builtin_memcpy(edi_3, esi_2, ecx_4 & 3)
                int32_t edx_5 = *(arg1 + 0x264)
                int32_t ecx_9 = (arg2 - edx_5) * 6
                __builtin_memset(__builtin_memset(var_464 + edx_5 * 6, 0, ecx_9 u>> 2 << 2), 0, 
                    ecx_9 & 3)
                int32_t* eax_14 = var_45c
                result = (*(*eax_14 + 0x30))(eax_14)
                
                if (result s>= 0)
                    int32_t* eax_16 = *(arg1 + 0x248)
                    var_464 = 0
                    result = (*(*eax_16 + 0x30))(eax_16)
                    
                    if (result s>= 0)
                        var_474 = 0
                        esi = arg2
                    label_40df5d:
                        int32_t* eax_18 = *(arg1 + 0x248)
                        
                        if (eax_18 != 0)
                            (*(*eax_18 + 8))(eax_18)
                            *(arg1 + 0x248) = nullptr
                        
                        int32_t* eax_19 = var_45c
                        var_45c = nullptr
                        bool cond:1_1 = (*(arg1 + 0x218) & 1) == 0
                        *(arg1 + 0x248) = eax_19
                        *(arg1 + 0x268) = esi
                        int32_t* eax_21
                        
                        if (not(cond:1_1))
                            eax_21 = sub_40bfa9(arg1 + 0x250, esi, *(arg1 + 0x264), &var_48c)
                        
                        if (not(cond:1_1) && eax_21 == 0)
                            result = 0x8007000e
                        else if ((*(arg1 + 0x218) & 4) == 0)
                        label_40dffb:
                            
                            if ((*(arg1 + 0x218) & 8) == 0)
                                goto label_40e025
                            
                            if (sub_40c0e8(arg1 + 0x258, esi, *(arg1 + 0x264), &var_490) != 0)
                                goto label_40e025
                            
                            result = 0x8007000e
                        else
                            if (sub_40c06a(arg1 + 0x254, esi, *(arg1 + 0x264), &var_488) != 0)
                                int32_t edx_8 = *(arg1 + 0x264)
                                int32_t ecx_18 = (esi - edx_8) << 2
                                __builtin_memset(
                                    __builtin_memset(*(arg1 + 0x254) + (edx_8 << 2), 0, 
                                        ecx_18 u>> 2 << 2), 
                                    0, ecx_18 & 3)
                                goto label_40dffb
                            
                            result = 0x8007000e

int32_t* eax_63 = var_470

if (eax_63 != 0)
    (*(*eax_63 + 8))(eax_63)
    var_470 = nullptr

if (var_464 != 0)
    int32_t* eax_64 = var_45c
    (*(*eax_64 + 0x30))(eax_64)

if (var_474 != 0)
    int32_t* eax_65 = *(arg1 + 0x248)
    (*(*eax_65 + 0x30))(eax_65)

if (var_468 != 0)
    int32_t* eax_66 = var_458
    (*(*eax_66 + 0x30))(eax_66)

if (var_46c != 0)
    int32_t* ebx_1 = *(arg1 + 0x234)
    (*(*ebx_1 + 0x30))(ebx_1)

sub_745f2b(__security_cookie_1)
return result
