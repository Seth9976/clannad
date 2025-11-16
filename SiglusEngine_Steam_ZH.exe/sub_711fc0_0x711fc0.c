// 函数: sub_711fc0
// 地址: 0x711fc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d13cb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_8
int32_t edx_2
edx_2:eax_8 = sx.q((arg4 - arg2) s/ 0x68)
void* ebx_1 = ((eax_8 - edx_2) s>> 1) * 0x68 + arg2
sub_712580(arg4 - 0x68, ebx_1, arg2, arg4 - 0x68, arg5)
void* edi_1 = ebx_1 + 0x68
void* var_f0 = edi_1

if (arg2 u< ebx_1)
    do
        if (arg5(ebx_1 - 0x68, ebx_1, eax_2) != 0)
            break
        
        if (arg5(ebx_1, ebx_1 - 0x68) != 0)
            break
        
        ebx_1 -= 0x68
    while (arg2 u< ebx_1)
    
    edi_1 = var_f0

void* edx_4 = arg4

if (edi_1 u< edx_4)
    do
        if (arg5(edi_1, ebx_1, eax_2) != 0)
            edx_4 = arg4
            break
        
        edx_4 = arg4
        
        if (arg5(ebx_1, edi_1) != 0)
            break
        
        edi_1 += 0x68
    while (edi_1 u< edx_4)
    
    var_f0 = edi_1

void* ecx_3 = ebx_1
void* eax_17 = edi_1
void* var_e8_2 = ecx_3

while (true)
    void* var_ec_1 = eax_17
    
    while (true)
        struct NT3::C_d3d_effect_global_val::VTable* var_7c
        void* var_78
        void* var_60
        void* var_48
        void* var_30
        int32_t var_18
        
        if (eax_17 u< edx_4)
            void** esi_1 = eax_17 + 0x1c
            void* edi_3 = edi_1 - 0x4c
            
            do
                if (arg5(ebx_1, eax_17, eax_2) == 0)
                    if (arg5(var_ec_1, ebx_1) != 0)
                        break
                    
                    edi_3 += 0x68
                    void* eax_20 = var_f0
                    var_f0 += 0x68
                    
                    if (eax_20 != var_ec_1)
                        sub_703520(&var_7c, edi_3 - 0x1c)
                        int32_t var_8_1 = 0
                        
                        if (edi_3 - 0x18 != &esi_1[-6])
                            sub_541b40(edi_3 - 0x18, &esi_1[-6], 0, 0xffffffff)
                        
                        if (edi_3 != esi_1)
                            sub_541b40(edi_3, esi_1, 0, 0xffffffff)
                        
                        if (edi_3 + 0x18 != &esi_1[6])
                            sub_541b40(edi_3 + 0x18, &esi_1[6], 0, 0xffffffff)
                        
                        if (edi_3 + 0x30 != &esi_1[0xc])
                            sub_541b40(edi_3 + 0x30, &esi_1[0xc], 0, 0xffffffff)
                        
                        *(edi_3 + 0x48) = esi_1[0x12]
                        
                        if (&esi_1[-6] != &var_78)
                            sub_541b40(&esi_1[-6], &var_78, 0, 0xffffffff)
                        
                        if (esi_1 != &var_60)
                            sub_541b40(esi_1, &var_60, 0, 0xffffffff)
                        
                        if (&esi_1[6] != &var_48)
                            sub_541b40(&esi_1[6], &var_48, 0, 0xffffffff)
                        
                        if (&esi_1[0xc] != &var_30)
                            sub_541b40(&esi_1[0xc], &var_30, 0, 0xffffffff)
                        
                        esi_1[0x12] = var_18
                        int32_t var_8_2 = 0xffffffff
                        sub_702710(&var_7c)
                
                esi_1 = &esi_1[0x1a]
                eax_17 = var_ec_1 + 0x68
                var_ec_1 = eax_17
            while (eax_17 u< arg4)
            
            ecx_3 = var_e8_2
        
        bool cond:0_1 = ecx_3 != arg2
        
        if (ecx_3 u> arg2)
            void* edi_4 = ebx_1 + 0x1c
            void** esi_2 = ecx_3 - 0x4c
            void* eax_43
            
            do
                if (arg5(&esi_2[-7], ebx_1, eax_2) == 0)
                    if (arg5(ebx_1, &esi_2[-7]) != 0)
                        ecx_3 = var_e8_2
                        eax_43 = arg2
                        break
                    
                    ebx_1 -= 0x68
                    edi_4 -= 0x68
                    
                    if (ebx_1 != &esi_2[-7])
                        sub_703520(&var_7c, ebx_1)
                        int32_t var_8_3 = 1
                        
                        if (edi_4 - 0x18 != &esi_2[-6])
                            sub_541b40(edi_4 - 0x18, &esi_2[-6], 0, 0xffffffff)
                        
                        if (edi_4 != esi_2)
                            sub_541b40(edi_4, esi_2, 0, 0xffffffff)
                        
                        if (edi_4 + 0x18 != &esi_2[6])
                            sub_541b40(edi_4 + 0x18, &esi_2[6], 0, 0xffffffff)
                        
                        if (edi_4 + 0x30 != &esi_2[0xc])
                            sub_541b40(edi_4 + 0x30, &esi_2[0xc], 0, 0xffffffff)
                        
                        *(edi_4 + 0x48) = esi_2[0x12]
                        
                        if (&esi_2[-6] != &var_78)
                            sub_541b40(&esi_2[-6], &var_78, 0, 0xffffffff)
                        
                        if (esi_2 != &var_60)
                            sub_541b40(esi_2, &var_60, 0, 0xffffffff)
                        
                        if (&esi_2[6] != &var_48)
                            sub_541b40(&esi_2[6], &var_48, 0, 0xffffffff)
                        
                        if (&esi_2[0xc] != &var_30)
                            sub_541b40(&esi_2[0xc], &var_30, 0, 0xffffffff)
                        
                        esi_2[0x12] = var_18
                        int32_t var_8_4 = 0xffffffff
                        sub_702710(&var_7c)
                
                esi_2 -= 0x68
                eax_43 = arg2
                ecx_3 = var_e8_2 - 0x68
                var_e8_2 = ecx_3
            while (eax_43 u< ecx_3)
            
            cond:0_1 = ecx_3 != eax_43
        
        if (cond:0_1)
            var_e8_2 = ecx_3 - 0x68
            
            if (var_ec_1 != arg4)
                struct NT3::C_d3d_effect_global_val::VTable* var_e4
                sub_703520(&var_e4, var_ec_1)
                int32_t var_8_13 = 6
                sub_712ac0(var_ec_1, var_e8_2)
                sub_712ac0(var_e8_2, &var_e4)
                int32_t var_8_14 = 0xffffffff
                sub_702710(&var_e4)
                edi_1 = var_f0
                eax_17 = var_ec_1 + 0x68
                ecx_3 = var_e8_2
                edx_4 = arg4
                break
            
            ebx_1 -= 0x68
            
            if (ecx_3 - 0x68 != ebx_1)
                sub_703520(&var_7c, ecx_3 - 0x68)
                int32_t var_8_9 = 4
                sub_712ac0(var_e8_2, ebx_1)
                sub_712ac0(ebx_1, &var_7c)
                int32_t var_8_10 = 0xffffffff
                sub_702710(&var_7c)
            
            edi_1 = var_f0 - 0x68
            var_f0 = edi_1
            sub_703520(&var_7c, ebx_1)
            int32_t var_8_11 = 5
            sub_712ac0(ebx_1, edi_1)
            sub_712ac0(edi_1, &var_7c)
            int32_t var_8_12 = 0xffffffff
            sub_702710(&var_7c)
            eax_17 = var_ec_1
            ecx_3 = var_e8_2
            edx_4 = arg4
        else
            void* eax_44 = var_ec_1
            
            if (eax_44 == arg4)
                *arg3 = ebx_1
                arg3[1] = var_f0
                fsbase->NtTib.ExceptionList = ExceptionList
                sub_745f2b(eax_2 ^ &__saved_ebp)
                return arg3
            
            if (var_f0 != eax_44)
                sub_703520(&var_7c, ebx_1)
                int32_t var_8_5 = 2
                sub_712ac0(ebx_1, var_f0)
                sub_712ac0(var_f0, &var_7c)
                int32_t var_8_6 = 0xffffffff
                sub_702710(&var_7c)
                eax_44 = var_ec_1
            
            var_f0 += 0x68
            void* esi_5 = ebx_1
            ebx_1 += 0x68
            var_ec_1 = eax_44 + 0x68
            sub_703520(&var_7c, esi_5)
            int32_t var_8_7 = 3
            sub_712ac0(esi_5, eax_44)
            sub_712ac0(eax_44, &var_7c)
            int32_t var_8_8 = 0xffffffff
            sub_702710(&var_7c)
            eax_17 = var_ec_1
            edi_1 = var_f0
            ecx_3 = var_e8_2
            edx_4 = arg4
