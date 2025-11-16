// 函数: sub_66b920
// 地址: 0x66b920
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c62f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg4
void* var_68 = ebx
int32_t eax_7
int32_t edx_2
edx_2:eax_7 = sx.q((ebx - arg2) s/ 0x30)
void* eax_10 = ebx - 0x30
int32_t* esi_2 = &arg2[((eax_7 - edx_2) s>> 1) * 0xc]
int32_t ecx_3 = sub_66c560(eax_10, esi_2, arg2, eax_10, arg5)
int32_t* edi_1 = &esi_2[0xc]
int32_t* var_6c = edi_1

if (arg2 u< esi_2)
    void* ebx_1 = &esi_2[-8]
    
    do
        int32_t* ecx_4
        
        if (*(ebx_1 + 0x34) u< 8)
            ecx_4 = esi_2
        else
            ecx_4 = *esi_2
        
        int32_t var_90_1 = *(ebx_1 + 0x30)
        int32_t eax_12
        eax_12, ecx_3 = sub_536340(ebx_1 - 0x10, ecx_4, *ebx_1, ecx_4)
        
        if (eax_12 s< 0)
            break
        
        void* eax_13 = ebx_1 - 0x10
        
        if (*(ebx_1 + 4) u>= 8)
            eax_13 = *eax_13
        
        int32_t var_90_2 = *ebx_1
        int32_t eax_14
        eax_14, ecx_3 = sub_536340(esi_2, ecx_3, *(ebx_1 + 0x30), eax_13)
        
        if (eax_14 s< 0)
            break
        
        esi_2 -= 0x30
        ebx_1 -= 0x30
    while (arg2 u< esi_2)
    
    ebx = var_68

if (edi_1 u< ebx)
    do
        int32_t* eax_15
        
        if (esi_2[5] u< 8)
            eax_15 = esi_2
        else
            eax_15 = *esi_2
        
        int32_t var_90_3 = esi_2[4]
        int32_t eax_16
        int32_t ecx_8
        eax_16, ecx_8 = sub_536340(edi_1, ecx_3, edi_1[4], eax_15)
        
        if (eax_16 s< 0)
            break
        
        int32_t* eax_17
        
        if (edi_1[5] u< 8)
            eax_17 = edi_1
        else
            eax_17 = *edi_1
        
        int32_t var_90_4 = edi_1[4]
        int32_t eax_18
        eax_18, ecx_3 = sub_536340(esi_2, ecx_8, esi_2[4], eax_17)
        
        if (eax_18 s< 0)
            break
        
        edi_1 = &edi_1[0xc]
    while (edi_1 u< ebx)
    
    var_6c = edi_1

int32_t* eax_19 = esi_2
int32_t* ebx_2 = edi_1
int32_t* var_60 = eax_19

while (true)
    void* ecx_10 = var_68
    
    while (true)
        if (ebx_2 u< ecx_10)
            int32_t* var_64_2 = &edi_1[-0xc]
            
            do
                int32_t* eax_21
                
                if (ebx_2[5] u< 8)
                    eax_21 = ebx_2
                else
                    eax_21 = *ebx_2
                
                int32_t var_90_5 = ebx_2[4]
                int32_t eax_22
                eax_22, ecx_10 = sub_536340(esi_2, ecx_10, esi_2[4], eax_21)
                
                if (eax_22 s>= 0)
                    int32_t* eax_23
                    
                    if (esi_2[5] u< 8)
                        eax_23 = esi_2
                    else
                        eax_23 = *esi_2
                    
                    int32_t var_90_6 = esi_2[4]
                    
                    if (sub_536340(ebx_2, ecx_10, ebx_2[4], eax_23) s< 0)
                        break
                    
                    int32_t* eax_25 = var_6c
                    var_6c = &var_6c[0xc]
                    ecx_10 = &var_64_2[0xc]
                    var_64_2 = ecx_10
                    
                    if (eax_25 != ebx_2 && ecx_10 != ebx_2)
                        int32_t var_48_1 = 7
                        int32_t var_4c_1 = 0
                        int16_t var_5c = 0
                        sub_52e3c0(&var_5c, ecx_10, 0, 0xffffffff)
                        int32_t var_8_1 = 0
                        sub_52e3c0(var_64_2, ebx_2, 0, 0xffffffff)
                        
                        if (ebx_2 != &var_5c)
                            sub_52e3c0(ebx_2, &var_5c, 0, 0xffffffff)
                        
                        int32_t var_8_2 = 0xffffffff
                        
                        if (var_48_1 u>= 8)
                            j__free(var_5c.d)
                        
                        int32_t var_30_1 = 7
                        int16_t var_44 = 0
                        int32_t var_34_1 = 0
                        sub_52e3c0(&var_44, &var_64_2[6], 0, 0xffffffff)
                        ecx_10 = &var_64_2[6]
                        int32_t var_8_3 = 1
                        
                        if (ecx_10 != &ebx_2[6])
                            ecx_10 = sub_52e3c0(ecx_10, &ebx_2[6], 0, 0xffffffff)
                        
                        if (&ebx_2[6] != &var_44)
                            ecx_10 = sub_52e3c0(&ebx_2[6], &var_44, 0, 0xffffffff)
                        
                        int32_t var_8_4 = 0xffffffff
                        
                        if (var_30_1 u>= 8)
                            ecx_10 = j__free(var_44.d)
                
                ebx_2 = &ebx_2[0xc]
            while (ebx_2 u< var_68)
            
            eax_19 = var_60
        
        int32_t* ecx_21 = arg2
        bool cond:1_1 = eax_19 != ecx_21
        
        if (eax_19 u> ecx_21)
            int32_t* edi_3 = &eax_19[-0xc]
            
            do
                int32_t* eax_28
                
                if (esi_2[5] u< 8)
                    eax_28 = esi_2
                else
                    eax_28 = *esi_2
                
                int32_t var_90_9 = esi_2[4]
                int32_t eax_29
                int32_t ecx_23
                eax_29, ecx_23 = sub_536340(edi_3, ecx_21, edi_3[4], eax_28)
                
                if (eax_29 s>= 0)
                    int32_t* eax_30
                    
                    if (edi_3[5] u< 8)
                        eax_30 = edi_3
                    else
                        eax_30 = *edi_3
                    
                    int32_t var_90_10 = edi_3[4]
                    
                    if (sub_536340(esi_2, ecx_23, esi_2[4], eax_30) s< 0)
                        eax_19 = var_60
                        ecx_21 = arg2
                        break
                    
                    esi_2 -= 0x30
                    
                    if (esi_2 != edi_3)
                        int32_t var_18_1 = 7
                        int32_t var_1c_1 = 0
                        int16_t var_2c = 0
                        sub_52e3c0(&var_2c, esi_2, 0, 0xffffffff)
                        int32_t var_8_5 = 2
                        sub_52e3c0(esi_2, edi_3, 0, 0xffffffff)
                        
                        if (edi_3 != &var_2c)
                            sub_52e3c0(edi_3, &var_2c, 0, 0xffffffff)
                        
                        int32_t var_8_6 = 0xffffffff
                        
                        if (var_18_1 u>= 8)
                            j__free(var_2c.d)
                        
                        int32_t var_18_2 = 7
                        int32_t var_1c_2 = 0
                        var_2c = 0
                        sub_66f040(&esi_2[6], &edi_3[6])
                
                edi_3 -= 0x30
                ecx_21 = arg2
                eax_19 = var_60 - 0x30
                var_60 = eax_19
            while (ecx_21 u< eax_19)
            
            cond:1_1 = eax_19 != ecx_21
        
        if (not(cond:1_1))
            if (ebx_2 == var_68)
                *arg3 = esi_2
                arg3[1] = var_6c
                fsbase->NtTib.ExceptionList = ExceptionList
                sub_745f2b(eax_2 ^ &__saved_ebp)
                return arg3
            
            if (var_6c != ebx_2 && esi_2 != var_6c)
                sub_66f040(esi_2, var_6c)
                sub_66f040(&esi_2[6], &var_6c[6])
                eax_19 = var_60
            
            int32_t* ecx_31 = ebx_2
            void** edx_7 = esi_2
            edi_1 = &var_6c[0xc]
            esi_2 = &esi_2[0xc]
            var_6c = edi_1
            ebx_2 = &ebx_2[0xc]
            
            if (edx_7 == ecx_31)
                break
            
            sub_66f040(edx_7, ecx_31)
            sub_66f040(&edx_7[6], &ecx_31[6])
            eax_19 = var_60
            break
        
        ecx_10 = var_68
        eax_19 -= 0x30
        var_60 = eax_19
        
        if (ebx_2 != ecx_10)
            if (ebx_2 != eax_19)
                sub_66f040(ebx_2, eax_19)
                sub_66f040(&ebx_2[6], &var_60[6])
                eax_19 = var_60
                ecx_10 = var_68
            
            edi_1 = var_6c
            ebx_2 = &ebx_2[0xc]
        else
            esi_2 -= 0x30
            
            if (eax_19 != esi_2)
                sub_66f040(eax_19, esi_2)
                sub_66f040(&var_60[6], &esi_2[6])
                eax_19 = var_60
                ecx_10 = var_68
            
            edi_1 = var_6c - 0x30
            var_6c = edi_1
            
            if (esi_2 != edi_1)
                sub_66f040(esi_2, edi_1)
                sub_66f040(&esi_2[6], &edi_1[6])
                eax_19 = var_60
                break
