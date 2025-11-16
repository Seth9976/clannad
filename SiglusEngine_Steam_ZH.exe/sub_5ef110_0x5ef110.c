// 函数: sub_5ef110
// 地址: 0x5ef110
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bcd80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_48 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_18 = ebx
int32_t eax_3 = *(ebx + 0x1ac)
int32_t var_54
int32_t var_24
int32_t* var_20
int32_t var_14

if (eax_3 != 0)
    if (eax_3 == 1 || eax_3 == 2 || eax_3 == 6 || eax_3 == 7 || eax_3 == 8 || eax_3 == 0xb
            || eax_3 == 0xa || eax_3 == 9 || eax_3 == 0xc)
        if (*(ebx + 0x12d0) != 0 && *(ebx + 0x1348) s> 0)
            Concurrency::details::ContextBase::ContextBase(arg2, &var_14, *(ebx + 0x1580))
            eax_3 = (*(ebx + 0x1438) - *(ebx + 0x1434)) s/ 0x15fc
            
            if (eax_3 s> 0)
                int32_t i_7 = sub_556ea0(ebx + 0x1394)
                eax_3 = *(ebx + 0x398)
                
                if (eax_3 != 0)
                    if (eax_3 == 1)
                        if (i_7 s> 0)
                            int32_t esi_7 = var_14
                            arg2 = 0
                            int32_t i
                            
                            do
                                *(ebx + 0x1434)
                                sub_5ef110(esi_7)
                                arg2 += 0x15fc
                                i = i_7
                                i_7 -= 1
                            while (i != 1)
                        
                    label_5ef68d:
                        void* eax_57 = *(ebx + 0x1580)
                        *(eax_57 + 0x12c) = 1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_57
                    
                    if (eax_3 == 2)
                        sub_5f1250(&var_24, i_7)
                        int32_t ecx_49 = 0
                        int32_t var_8_2 = 7
                        
                        if (i_7 s> 0)
                            int32_t edx_16 = var_24
                            int32_t esi_8 = 0
                            
                            do
                                int32_t eax_59 = *(ebx + 0x1434) + esi_8
                                esi_8 += 0x15fc
                                *(edx_16 + (ecx_49 << 2)) = eax_59
                                ecx_49 += 1
                            while (ecx_49 s< i_7)
                        
                        int32_t eax_60 = var_24
                        
                        if (eax_60 != var_20)
                            int32_t* (* var_4c_17)(void* arg1, void* arg2) = sub_5eeef0
                            sub_5f20b0(eax_60, var_20, eax_60, var_54)
                            eax_60 = var_24
                        
                        if (i_7 s> 0)
                            int32_t esi_9 = var_14
                            int32_t ebx_2 = 0
                            
                            do
                                *(eax_60 + (ebx_2 << 2))
                                sub_5ef110(esi_9)
                                eax_60 = var_24
                                ebx_2 += 1
                            while (ebx_2 s< i_7)
                            
                            ebx = var_18
                        
                        eax_3 = *(ebx + 0x1580)
                        int32_t edx_18 = var_24
                        *(eax_3 + 0x12c) = 1
                        
                        if (edx_18 != 0)
                            eax_3 = j__free(edx_18)
                else if (i_7 s> 0)
                    int32_t esi_6 = var_14
                    arg2 = eax_3
                    int32_t i_1
                    
                    do
                        *(ebx + 0x1434)
                        sub_5ef110(esi_6)
                        eax_3 = arg2 + 0x15fc
                        arg2 = eax_3
                        i_1 = i_7
                        i_7 -= 1
                    while (i_1 != 1)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_3
    else if (eax_3 == 3 || eax_3 == 5 || eax_3 == 4)
        int32_t edi_1 = *(ebx + 0x158c)
        
        for (void* i_2 = *(ebx + 0x1588); i_2 != edi_1; i_2 += 0x130)
            if (*(i_2 + 4) != 0 && *(i_2 + 0x7c) u> 0)
                Concurrency::details::ContextBase::ContextBase(arg2, &var_18, i_2)
        
        eax_3 = sub_556ea0(ebx + 0x1394)
        
        if (eax_3 s> 0)
            Concurrency::details::ContextBase::ContextBase(arg2, &var_18, *(ebx + 0x1580))
            eax_3 = sub_556ea0(ebx + 0x1394)
            arg2 = eax_3
            
            if (eax_3 s> 0)
                void* esi_5 = var_18
                int32_t edi_2 = 0
                int32_t eax_49
                int32_t i_3
                
                do
                    *(ebx + 0x1434)
                    eax_49 = sub_5ef110(esi_5)
                    edi_2 += 0x15fc
                    i_3 = arg2
                    arg2 -= 1
                while (i_3 != 1)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_49
else if (*(ebx + 0x12d0) != eax_3 && *(ebx + 0x1348) s> eax_3)
    eax_3 = (*(ebx + 0x1438) - *(ebx + 0x1434)) s/ 0x15fc
    
    if (eax_3 s> 0)
        Concurrency::details::ContextBase::ContextBase(arg2, &var_14, *(ebx + 0x1580))
        int32_t i_6 = sub_556ea0(ebx + 0x1394)
        eax_3 = *(ebx + 0x398)
        
        if (eax_3 != 0)
            if (eax_3 == 1)
                if (i_6 s> 0)
                    int32_t esi_2 = var_14
                    arg2 = 0
                    int32_t i_4
                    
                    do
                        *(ebx + 0x1434)
                        sub_5ef110(esi_2)
                        arg2 += 0x15fc
                        i_4 = i_6
                        i_6 -= 1
                    while (i_4 != 1)
                
                goto label_5ef68d
            
            sub_5f1250(&var_24, i_6)
            int32_t ecx_11 = 0
            int32_t var_8_1 = 0
            int32_t* esi_3 = var_24
            
            if (i_6 s> 0)
                int32_t edx_4 = 0
                
                do
                    int32_t eax_12 = *(ebx + 0x1434) + edx_4
                    edx_4 += 0x15fc
                    esi_3[ecx_11] = eax_12
                    ecx_11 += 1
                while (ecx_11 s< i_6)
            
            int32_t eax_13 = *(ebx + 0x398)
            
            if (eax_13 != 2)
                int32_t (* var_4c_6)(void* arg1, void* arg2)
                int32_t var_38
                int32_t ecx_15
                
                if (eax_13 != 3)
                    if (eax_13 != 4)
                        if (eax_13 != 5)
                            if (eax_13 != 6)
                                if (eax_13 != 7)
                                    if (eax_13 == 8 && esi_3 != var_20)
                                        var_38 = 0
                                        int32_t var_34_6 = 0
                                        ecx_15 = (var_20 - esi_3) s>> 2
                                        int32_t var_30_6 = 0
                                        int32_t eax_41
                                        int32_t edx_11
                                        edx_11:eax_41 = sx.q(ecx_15 + 1)
                                        int32_t var_2c_6 = (eax_41 - edx_11) s>> 1
                                        int32_t* var_28_6 = &var_38
                                        var_8_1.b = 6
                                        var_4c_6 = sub_5ef0f0
                                        goto label_5ef445
                                else if (esi_3 != var_20)
                                    var_38 = 0
                                    int32_t var_34_5 = 0
                                    ecx_15 = (var_20 - esi_3) s>> 2
                                    int32_t var_30_5 = 0
                                    int32_t eax_36
                                    int32_t edx_10
                                    edx_10:eax_36 = sx.q(ecx_15 + 1)
                                    int32_t var_2c_5 = (eax_36 - edx_10) s>> 1
                                    int32_t* var_28_5 = &var_38
                                    var_8_1.b = 5
                                    var_4c_6 = sub_5ef0d0
                                    goto label_5ef445
                            else if (esi_3 != var_20)
                                var_38 = 0
                                int32_t var_34_4 = 0
                                ecx_15 = (var_20 - esi_3) s>> 2
                                int32_t var_30_4 = 0
                                int32_t eax_31
                                int32_t edx_9
                                edx_9:eax_31 = sx.q(ecx_15 + 1)
                                int32_t var_2c_4 = (eax_31 - edx_9) s>> 1
                                int32_t* var_28_4 = &var_38
                                var_8_1.b = 4
                                var_4c_6 = sub_5ef0b0
                                goto label_5ef445
                        else if (esi_3 != var_20)
                            var_38 = 0
                            int32_t var_34_3 = 0
                            ecx_15 = (var_20 - esi_3) s>> 2
                            int32_t var_30_3 = 0
                            int32_t eax_26
                            int32_t edx_8
                            edx_8:eax_26 = sx.q(ecx_15 + 1)
                            int32_t var_2c_3 = (eax_26 - edx_8) s>> 1
                            int32_t* var_28_3 = &var_38
                            var_8_1.b = 3
                            var_4c_6 = sub_5ef090
                            goto label_5ef445
                    else if (esi_3 != var_20)
                        var_38 = 0
                        int32_t var_34_2 = 0
                        ecx_15 = (var_20 - esi_3) s>> 2
                        int32_t var_30_2 = 0
                        int32_t eax_21
                        int32_t edx_7
                        edx_7:eax_21 = sx.q(ecx_15 + 1)
                        int32_t var_2c_2 = (eax_21 - edx_7) s>> 1
                        int32_t* var_28_2 = &var_38
                        var_8_1.b = 2
                        var_4c_6 = sub_5ef070
                        goto label_5ef445
                else if (esi_3 != var_20)
                    var_38 = 0
                    int32_t var_34_1 = 0
                    ecx_15 = (var_20 - esi_3) s>> 2
                    int32_t var_30_1 = 0
                    int32_t eax_16
                    int32_t edx_6
                    edx_6:eax_16 = sx.q(ecx_15 + 1)
                    int32_t var_2c_1 = (eax_16 - edx_6) s>> 1
                    int32_t* var_28_1 = &var_38
                    var_8_1.b = 1
                    var_4c_6 = sub_5ef050
                label_5ef445:
                    sub_5f2280(&var_38, var_20, esi_3, ecx_15, &var_38, var_4c_6)
                    var_8_1.b = 0
                    int32_t eax_45 = var_38
                    
                    if (eax_45 != 0)
                        j__free(eax_45)
            else if (esi_3 != var_20)
                int32_t* (* var_4c_5)(void* arg1, void* arg2) = sub_5eeef0
                sub_5f20b0(eax_13, var_20, esi_3, var_54)
            
            int32_t eax_46 = 0
            arg2 = 0
            
            if (i_6 s> 0)
                int32_t esi_4 = var_14
                int32_t ebx_1 = var_24
                
                do
                    *(ebx_1 + (eax_46 << 2))
                    sub_5ef110(esi_4)
                    eax_46 = arg2 + 1
                    arg2 = eax_46
                while (eax_46 s< i_6)
                
                ebx = var_18
            
            *(*(ebx + 0x1580) + 0x12c) = 1
            eax_3 = var_24
            
            if (eax_3 != 0)
                eax_3 = j__free(eax_3)
        else if (i_6 s> 0)
            int32_t esi_1 = var_14
            arg2 = eax_3
            int32_t i_5
            
            do
                *(ebx + 0x1434)
                sub_5ef110(esi_1)
                eax_3 = arg2 + 0x15fc
                arg2 = eax_3
                i_5 = i_6
                i_6 -= 1
            while (i_5 != 1)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_3
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
