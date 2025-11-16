// 函数: sub_55fda0
// 地址: 0x55fda0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2b88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_68 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4 = *arg2
int32_t esi = *arg4
struct _EXCEPTION_REGISTRATION_RECORD** result

if (eax_4 == 0 || eax_4 == 1 || eax_4 == 2)
    bool var_33_1 = false
    bool var_32_1 = false
    bool var_34_1 = false
    bool var_31_1 = false
    int32_t var_4c_1 = 2
    struct _EXCEPTION_REGISTRATION_RECORD** var_48_1 = 0xffffffff
    sub_5f85b0(arg3)
    int32_t var_44_1 = 0xffffffff
    int32_t* var_40_1
    int32_t ecx_8
    
    if (esi == 0)
        var_40_1 = nullptr
        var_44_1 = 0xffffffff
        ecx_8 = (arg4[2] - arg4[1]) s/ 0x164
    else if (esi != 1)
        ecx_8 = arg2
        var_40_1 = arg2
    else
        void* esi_3 = arg4[1]
        var_40_1 = 1
        ecx_8 = (arg4[2] - esi_3) s/ 0x164
        var_44_1 = *(esi_3 + 8)
    
    for (int32_t* i = arg4[2]; i u< arg4[3]; i = &i[0x59])
        switch (*i)
            case 3
                int32_t edx_8 = i[2]
                
                if (edx_8 s>= 0xffffffff && edx_8 s< 0x20)
                    var_4c_1 = edx_8
            case 4
                var_33_1 = i[2] != 0
            case 5
                var_32_1 = i[2] != 0
            case 6
                var_48_1 = i[2]
            case 0xb
                var_31_1 = i[2] != 0
            case 0xc
                var_34_1 = i[2] != 0
    
    int32_t eax_11 = *arg2
    
    if (eax_11 == 0 || eax_11 == 1)
        void* i_6 = ecx_8 - var_40_1
        void* i_4 = i_6
        sub_560370(arg3 + 0xb8, i_6)
        
        if (i_4 s> 0)
            int32_t* edx_11 = arg4
            int32_t esi_6 = 0
            int32_t edi_2 = var_40_1 * 0x164
            void* i_1
            
            do
                void* eax_47 = edx_11[1] + edi_2
                int32_t ecx_31 = *(eax_47 + 0x15c)
                
                if (ecx_31 == 1)
                    void** eax_49 = *(eax_47 + 0x148) + 0xc
                    int32_t* ecx_33 = *(arg3 + 0xb8) + esi_6
                    
                    if (ecx_33 != eax_49)
                        sub_52e3c0(ecx_33, eax_49, 0, 0xffffffff)
                        edx_11 = arg4
                    
                    *(esi_6 + *(arg3 + 0xb8) + 0x18) = 0
                    *(esi_6 + *(arg3 + 0xb8) + 0x1c) = 0
                else if (ecx_31 == 2)
                    void** eax_53 = *(eax_47 + 0x148) + 0xc
                    int32_t* ecx_35 = *(arg3 + 0xb8) + esi_6
                    
                    if (ecx_35 != eax_53)
                        sub_52e3c0(ecx_35, eax_53, 0, 0xffffffff)
                        edx_11 = arg4
                    
                    *(esi_6 + *(arg3 + 0xb8) + 0x18) = *(*(edi_2 + edx_11[1] + 0x148) + 0x16c)
                    *(esi_6 + *(arg3 + 0xb8) + 0x1c) = *(*(edi_2 + edx_11[1] + 0x148) + 0x16c)
                else if (ecx_31 == 3)
                    void** eax_61 = *(eax_47 + 0x148) + 0xc
                    int32_t* ecx_38 = *(arg3 + 0xb8) + esi_6
                    
                    if (ecx_38 != eax_61)
                        sub_52e3c0(ecx_38, eax_61, 0, 0xffffffff)
                        edx_11 = arg4
                    
                    *(esi_6 + *(arg3 + 0xb8) + 0x18) = *(*(edi_2 + edx_11[1] + 0x148) + 0x16c)
                    *(esi_6 + *(arg3 + 0xb8) + 0x1c) = *(*(edi_2 + edx_11[1] + 0x148) + 0x2d0)
                
                edi_2 += 0x164
                esi_6 += 0x24
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
    else
        void* i_5 = ecx_8 - var_40_1
        void* i_3 = i_5
        sub_560370(arg3 + 0xb8, i_5)
        
        if (i_3 s> 0)
            int32_t* edx_10 = arg4
            int32_t esi_5 = 0
            int32_t edi_1 = var_40_1 * 0x164
            void* i_2
            
            do
                void* ecx_15 = edx_10[1] + edi_1
                int32_t eax_12 = *(ecx_15 + 0x15c)
                
                if (eax_12 == 1)
                    void** eax_14 = *(ecx_15 + 0x148) + 0xc
                    int32_t* ecx_17 = *(arg3 + 0xb8) + esi_5
                    
                    if (ecx_17 != eax_14)
                        sub_52e3c0(ecx_17, eax_14, 0, 0xffffffff)
                        edx_10 = arg4
                    
                    *(esi_5 + *(arg3 + 0xb8) + 0x20) = 1
                    *(esi_5 + *(arg3 + 0xb8) + 0x18) = 0
                    *(esi_5 + *(arg3 + 0xb8) + 0x1c) = 0
                else if (eax_12 == 2)
                    void** eax_19 = *(ecx_15 + 0x148) + 0xc
                    int32_t* ecx_19 = *(arg3 + 0xb8) + esi_5
                    
                    if (ecx_19 != eax_19)
                        sub_52e3c0(ecx_19, eax_19, 0, 0xffffffff)
                        edx_10 = arg4
                    
                    *(esi_5 + *(arg3 + 0xb8) + 0x20) = *(*(edi_1 + edx_10[1] + 0x148) + 0x16c)
                    *(esi_5 + *(arg3 + 0xb8) + 0x18) = 0
                    *(esi_5 + *(arg3 + 0xb8) + 0x1c) = 0
                else if (eax_12 == 3)
                    void** eax_26 = *(ecx_15 + 0x148) + 0xc
                    int32_t* ecx_22 = *(arg3 + 0xb8) + esi_5
                    
                    if (ecx_22 != eax_26)
                        sub_52e3c0(ecx_22, eax_26, 0, 0xffffffff)
                        edx_10 = arg4
                    
                    *(esi_5 + *(arg3 + 0xb8) + 0x20) = *(*(edi_1 + edx_10[1] + 0x148) + 0x16c)
                    *(esi_5 + *(arg3 + 0xb8) + 0x18) = *(*(edi_1 + edx_10[1] + 0x148) + 0x2d0)
                    *(esi_5 + *(arg3 + 0xb8) + 0x1c) = *(*(edi_1 + edx_10[1] + 0x148) + 0x2d0)
                else if (eax_12 == 4)
                    void** eax_37 = *(ecx_15 + 0x148) + 0xc
                    int32_t* ecx_26 = *(arg3 + 0xb8) + esi_5
                    
                    if (ecx_26 != eax_37)
                        sub_52e3c0(ecx_26, eax_37, 0, 0xffffffff)
                        edx_10 = arg4
                    
                    *(esi_5 + *(arg3 + 0xb8) + 0x20) = *(*(edi_1 + edx_10[1] + 0x148) + 0x16c)
                    *(esi_5 + *(arg3 + 0xb8) + 0x18) = *(*(edi_1 + edx_10[1] + 0x148) + 0x2d0)
                    *(esi_5 + *(arg3 + 0xb8) + 0x1c) = *(*(edi_1 + edx_10[1] + 0x148) + 0x434)
                
                edi_1 += 0x164
                esi_5 += 0x24
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
    
    int32_t eax_68 = *arg2
    
    if (eax_68 == 0)
        *(arg3 + 0xa0) = 0
    label_5602af:
        *(arg3 + 0xa4) = var_44_1
        *(arg3 + 0xa8) = var_4c_1
        *(arg3 + 0xac) = var_48_1
        result.b = var_33_1
        *(arg3 + 0xb0) = result.b
        result.b = var_32_1
        *(arg3 + 0xb1) = result.b
        result.b = var_34_1
        *(arg3 + 0xb2) = result.b
        result.b = var_31_1
        *(arg3 + 0xb3) = 1
        *(arg3 + 0xb4) = result.b
        *(arg3 + 0xc4) = 0
        *(arg3 + 0xc8) = 0xffffffff
        *(arg3 + 0xcc) = 0
        *(arg3 + 0xd0) = 0xffffffff
    else
        if (eax_68 == 1)
            *(arg3 + 0xa0) = 1
            goto label_5602af
        
        if (eax_68 == 2)
            *(arg3 + 0xa0) = 2
            goto label_5602af
else if (eax_4 == 3)
    void* eax_5
    eax_5.b = *(arg4[1] + 8) != 0
    sub_5f8650(arg3, eax_5.b)
else if (eax_4 == 5)
    int32_t ecx
    ecx.b = *(arg3 + 0xa0) != 0xffffffff
    sub_677bb0(ecx)
else if (eax_4 == 4)
    sub_5f8700(arg3)
else if (eax_4 != 6)
    int32_t var_1c_1 = 7
    int32_t var_20_1 = 0
    int16_t var_30 = 0
    sub_52e720(&var_30, 0xad8fa4, 0x1a)
    int32_t var_8_1 = 0
    sub_684160(data_bac424, 2, &var_30)
    sub_52e8a0(&var_30)
else
    sub_5f87b0(arg3)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
