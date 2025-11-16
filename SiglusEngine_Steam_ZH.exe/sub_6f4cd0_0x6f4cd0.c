// 函数: sub_6f4cd0
// 地址: 0x6f4cd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd7b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_dc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[9].b = 1
int32_t ecx = *(arg2 + 8)
int128_t xmm0 = *(arg2 + 0x14)
int32_t esi = *(arg2 + 4)
int32_t ecx_1 = *(arg2 + 0xc)
int32_t ecx_2 = *(arg2 + 0x10)
int32_t eax_5 = xmm0:8.d - xmm0.d
int32_t ecx_4 = xmm0:0xc.d - xmm0:4.d
int32_t i_4 = (*(arg2 + 0x28) - *(arg2 + 0x24)) s>> 5
int32_t i_3 = i_4

if (arg3 != 0)
    ecx_4 += 2
    eax_5 += 2

int32_t* result
int32_t ecx_6
result, ecx_6 = sub_6f3610(arg1, eax_5, ecx_4, 0, 0x400, 0x15, 1)

if (result.b != 0)
    int32_t var_e0_1 = 0
    int32_t var_e4_1 = ecx_6
    arg1[6] = ecx
    arg1[5] = esi
    int32_t var_8c
    int32_t ecx_8
    result, ecx_8 = sub_6f3b20(arg1, ecx_6, &var_8c)
    
    if (result.b == 0)
        result.b = 0
    else
        int32_t i = 0
        int32_t var_88
        
        if (arg1[4] s> 0)
            do
                ecx_8 = _memset(var_8c * i + var_88, 0, arg1[3] << 2)
                i += 1
            while (i s< arg1[4])
        
        if (arg3 != 0)
            void var_84
            sub_6c7fd0(&var_84)
            int32_t var_8_1 = 0
            int32_t ecx_11 = xmm0:8.d - xmm0.d
            int32_t var_e0_3 = 0
            sub_6c8170(&var_84, ecx_11, xmm0:0xc.d - xmm0:4.d, ecx_11, 0)
            char var_50
            void* var_4c
            int32_t var_48
            void* var_40
            int32_t var_2c
            
            if (i_4 s> 0)
                int32_t eax_14 = 0
                int32_t var_98_1 = 0
                int32_t i_1
                
                do
                    void* ecx_14 = *(arg2 + 0x24) + eax_14
                    void* ebx_2
                    
                    if (var_50 == 0)
                        ebx_2 = var_4c
                        
                        if (ebx_2 == var_48)
                            ebx_2 = nullptr
                    else
                        ebx_2 = var_40
                    
                    int32_t var_38
                    int32_t var_34
                    sub_6dd0a0(ecx_14, 
                        (*(ecx_14 + 8) - xmm0:4.d) * var_38 + (*(ecx_14 + 4) - xmm0.d) * var_34
                            + ebx_2, 
                        var_2c << 2)
                    eax_14 = var_98_1 + 0x20
                    i_1 = i_3
                    i_3 -= 1
                    var_98_1 = eax_14
                while (i_1 != 1)
            
            void* eax_18
            
            if (var_50 == 0)
                eax_18 = var_4c
                
                if (eax_18 == var_48)
                    eax_18 = nullptr
            else
                eax_18 = var_40
            
            int32_t eax_20
            int32_t edx_5
            edx_5:eax_20 = sx.q(var_8c)
            int32_t var_28
            sub_6f4750(eax_20, ((edx_5 & 3) + eax_20) s>> 2, var_88, arg1[2], eax_18, var_2c, 
                var_28, 0, 0, 0)
            void* eax_21
            
            if (var_50 == 0)
                eax_21 = var_4c
                
                if (eax_21 == var_48)
                    eax_21 = nullptr
            else
                eax_21 = var_40
            
            int32_t eax_23
            int32_t edx_9
            edx_9:eax_23 = sx.q(var_8c)
            sub_6f4750(eax_23, ((edx_9 & 3) + eax_23) s>> 2, var_88, arg1[2], eax_21, var_2c, 
                var_28, 2, 0, 0)
            void* eax_24
            
            if (var_50 == 0)
                eax_24 = var_4c
                
                if (eax_24 == var_48)
                    eax_24 = nullptr
            else
                eax_24 = var_40
            
            int32_t eax_26
            int32_t edx_13
            edx_13:eax_26 = sx.q(var_8c)
            sub_6f4750(eax_26, ((edx_13 & 3) + eax_26) s>> 2, var_88, arg1[2], eax_24, var_2c, 
                var_28, 0, 2, 0)
            void* eax_27
            
            if (var_50 == 0)
                eax_27 = var_4c
                
                if (eax_27 == var_48)
                    eax_27 = nullptr
            else
                eax_27 = var_40
            
            int32_t eax_29
            int32_t edx_17
            edx_17:eax_29 = sx.q(var_8c)
            sub_6f4750(eax_29, ((edx_17 & 3) + eax_29) s>> 2, var_88, arg1[2], eax_27, var_2c, 
                var_28, 2, 2, 0)
            void* eax_30
            
            if (var_50 == 0)
                eax_30 = var_4c
                
                if (eax_30 == var_48)
                    eax_30 = nullptr
            else
                eax_30 = var_40
            
            int32_t eax_32
            int32_t edx_21
            edx_21:eax_32 = sx.q(var_8c)
            sub_6f4750(eax_32, ((edx_21 & 3) + eax_32) s>> 2, var_88, arg1[2], eax_30, var_2c, 
                var_28, 1, 0, 0)
            void* eax_33
            
            if (var_50 == 0)
                eax_33 = var_4c
                
                if (eax_33 == var_48)
                    eax_33 = nullptr
            else
                eax_33 = var_40
            
            int32_t eax_35
            int32_t edx_25
            edx_25:eax_35 = sx.q(var_8c)
            sub_6f4750(eax_35, ((edx_25 & 3) + eax_35) s>> 2, var_88, arg1[2], eax_33, var_2c, 
                var_28, 0, 1, 0)
            void* eax_36
            
            if (var_50 == 0)
                eax_36 = var_4c
                
                if (eax_36 == var_48)
                    eax_36 = nullptr
            else
                eax_36 = var_40
            
            int32_t eax_38
            int32_t edx_29
            edx_29:eax_38 = sx.q(var_8c)
            sub_6f4750(eax_38, ((edx_29 & 3) + eax_38) s>> 2, var_88, arg1[2], eax_36, var_2c, 
                var_28, 2, 1, 0)
            void* eax_39
            
            if (var_50 == 0)
                eax_39 = var_4c
                
                if (eax_39 == var_48)
                    eax_39 = nullptr
            else
                eax_39 = var_40
            
            int32_t eax_41
            int32_t edx_33
            edx_33:eax_41 = sx.q(var_8c)
            sub_6f4750(eax_41, ((edx_33 & 3) + eax_41) s>> 2, var_88, arg1[2], eax_39, var_2c, 
                var_28, 1, 2, 0)
            void* eax_42
            
            if (var_50 == 0)
                eax_42 = var_4c
                
                if (eax_42 == var_48)
                    eax_42 = nullptr
            else
                eax_42 = var_40
            
            int32_t eax_44
            int32_t edx_37
            edx_37:eax_44 = sx.q(var_8c)
            ecx_8 = sub_6f4750(eax_44, ((edx_37 & 3) + eax_44) s>> 2, var_88, arg1[2], eax_42, 
                var_2c, var_28, 1, 1, 0)
            int32_t var_8_2 = 0xffffffff
            arg1[9].b = 1
            HGDIOBJ ho
            
            if (ho != 0)
                GdiFlush()
                ecx_8 = DeleteObject(ho)
            
            void* var_48_1 = var_4c
            int32_t var_40_1
            __builtin_memset(&var_40_1, 0, 0x28)
            
            if (var_4c != 0)
                ecx_8 = j__free(var_4c)
                int32_t var_4c_1 = 0
                int32_t var_48_2 = 0
                int32_t var_44_1 = 0
        else if (i_4 s> 0)
            int32_t eax_46 = 0
            int32_t var_94 = 0
            int32_t i_2
            
            do
                void* ecx_26 = *(arg2 + 0x24) + eax_46
                eax_46.b = *(ecx_26 + 0x14)
                int32_t eax_47 = var_8c
                sub_6dd0a0(ecx_26, 
                    (*(ecx_26 + 8) - xmm0:4.d) * eax_47 + var_88 + ((*(ecx_26 + 4) - xmm0.d) << 2), 
                    eax_47)
                ecx_8 = sub_6f5460(arg1, &var_8c)
                
                if (arg1[9].b == 0 && eax_46.b != 0)
                    arg1[9].b = 1
                
                eax_46 = var_94 + 0x20
                var_94 = eax_46
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
        
        int32_t var_e0_9 = ecx_8
        
        if (sub_6f3c40(arg1).b == 0)
            result.b = 0
        else
            arg1[7] = ecx_1 - xmm0.d
            result.b = 1
            arg1[8] = ecx_2 - xmm0:4.d
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
