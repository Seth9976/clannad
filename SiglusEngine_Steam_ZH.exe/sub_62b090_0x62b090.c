// 函数: sub_62b090
// 地址: 0x62b090
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c0862
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_11c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_3 = data_bac514
int32_t var_ec
int32_t var_d8
int16_t var_74
int16_t var_5c
int16_t var_44
int16_t var_2c

if (eax_3[4] == 0)
    int32_t var_60 = 7
    int32_t var_64 = 0
    var_74 = 0
    sub_52e720(&var_74, 0xaf48dc, 0xe)
    int32_t var_8_1 = 0
    sub_684160(data_bac424, 5, &var_74)
    int32_t var_8_2 = 0xffffffff
    
    if (var_60 u>= 8)
        j__free(var_74.d)
    
    int32_t* ecx_2 = data_bac4d8
    var_74 = 0
    int32_t var_60_1 = 7
    int32_t var_64_1 = 0
    *(data_bac4a0 + 4) = 0xffffffff
    
    if (ecx_2 != &data_4ebe3c8)
        sub_52e3c0(ecx_2, &data_4ebe3c8, 0, 0xffffffff)
    
    int32_t* ecx_4 = data_bac4d8 + 0x18
    
    if (ecx_4 != &data_4ebe3c8)
        sub_52e3c0(ecx_4, &data_4ebe3c8, 0, 0xffffffff)
    
    int32_t* ecx_6 = data_bac4d8 + 0x30
    
    if (ecx_6 != &data_4ebe3c8)
        sub_52e3c0(ecx_6, &data_4ebe3c8, 0, 0xffffffff)
    
    uint32_t eax_5 = data_bac508
    
    if (*(eax_5 + 0x74) != 0)
        void* lpFileName = eax_5 + 0x78
        
        if (*(lpFileName + 0x14) u>= 8)
            lpFileName = *lpFileName
        
        eax_5 = GetFileAttributesW(lpFileName)
        
        if (eax_5 == 0xffffffff || (eax_5.b & 0x10) == 0)
            int32_t var_48_1 = 7
            int32_t var_4c_1 = 0
            var_5c = 0
            sub_52e720(&var_5c, "\Omi", 0xf)
            int32_t var_8_3 = 1
            sub_684160(data_bac424, 2, &var_5c)
            int32_t var_8_4 = 0xffffffff
            
            if (var_48_1 u>= 8)
                j__free(var_5c.d)
            
            eax_5 = 0
            int32_t var_48_2 = 7
            int32_t var_4c_2 = 0
            var_5c = 0
        else
            void** edx_2 = data_bac508 + 0x78
            int32_t* ecx_8 = data_bac4d8 + 0x30
            
            if (ecx_8 != edx_2)
                eax_5 = sub_52e3c0(ecx_8, edx_2, 0, 0xffffffff)
    
    int16_t* eax_6 = sub_532b80(eax_5, data_bac4d8 + 0x30, &var_ec, &data_ad900c)
    int32_t var_8_5 = 2
    int16_t* eax_7 = sub_532b80(eax_6, eax_6, &var_44, u"savedata_zh")
    var_8_5.b = 3
    int32_t* ecx_14 = data_bac4d8 + 0x48
    
    if (ecx_14 != eax_7)
        sub_52e3c0(ecx_14, eax_7, 0, 0xffffffff)
    
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    int32_t var_8_6 = 0xffffffff
    int32_t var_30_1 = 7
    int32_t var_34 = 0
    var_44 = 0
    
    if (var_d8 u>= 8)
        j__free(var_ec)
    
    int32_t var_d8_1 = 7
    int32_t var_dc_1 = 0
    var_ec.w = 0
    int16_t* eax_8 = sub_532b80(0, data_bac4d8 + 0x30, &var_2c, u"\__DEBUG_LOG")
    int32_t var_8_7 = 4
    int32_t* ecx_17 = data_bac4d8 + 0x60
    
    if (ecx_17 != eax_8)
        sub_52e3c0(ecx_17, eax_8, 0, 0xffffffff)
    
    int32_t var_8_8 = 0xffffffff
    int32_t var_18
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    var_2c = 0
    goto label_62bc2b

int32_t ecx_19 = sub_548cb0(eax_3, u"SoftWare\", &var_ec, eax_3)
int32_t var_8_9 = 5
int32_t var_48_3 = 7
int32_t var_4c_3 = 0
var_5c = 0
int32_t var_a8_1 = 7
int32_t var_ac_1 = 0
int16_t var_bc = 0
int32_t var_78_1 = 7
int32_t var_7c_1 = 0
int16_t var_8c = 0
int32_t var_60_2 = 7
int32_t var_64_2 = 0
var_74 = 0
var_8_9.b = 9
int32_t var_30_2 = 7
int16_t* ecx_20 = &var_44
int32_t var_34_1 = 0

if (sub_6b4580(ecx_19, &var_ec) == 0)
    var_44 = 0
    sub_52e720(ecx_20, 0xaf4968, 0x42)
    var_8_9.b = 0xa
label_62b488:
    sub_684160(data_bac424, 2, &var_44)
    
    if (var_30_2 u>= 8)
        j__free(var_44.d)
    
    goto label_62b996

var_44 = 0
sub_52e720(ecx_20, u"exe_dir", 7)
var_8_9.b = 0xb
var_8_9.b = 9
int32_t ebx
ebx.b = sub_6b46c0(&var_44, &var_ec, 0x80000002, &var_44, &var_5c) == 0

if (var_30_2 u>= 8)
    j__free(var_44.d)

if (ebx.b != 0)
    var_30_2 = 7
    int32_t var_34_2 = 0
    var_44 = 0
    sub_52e720(&var_44, 0xaf4a00, 0x45)
    var_8_9.b = 0xc
    goto label_62b488

int32_t result
int16_t* ecx_28

if (sub_6b4e60(&var_bc) != 0)
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    sub_52e720(&var_2c, u"dat_dir", 7)
    var_8_9.b = 0xf
    var_8_9.b = 9
    ebx.b = sub_6b46c0(&var_2c, &var_ec, 0x80000002, &var_2c, &var_8c) == 0
    sub_52e8a0(&var_2c)
    int16_t* ecx_31 = &var_2c
    
    if (ebx.b != 0)
        int32_t var_18_3 = 7
        int32_t var_1c_3 = 0
        var_2c = 0
        sub_52e720(ecx_31, 0xaf4ad0, 0x43)
        var_8_9.b = 0x10
    label_62b985:
        sub_684160(data_bac424, 2, &var_2c)
        ecx_28 = &var_2c
        goto label_62b98d
    
    sub_52e820(ecx_31, u"dat_setup")
    var_8_9.b = 0x11
    var_8_9.b = 9
    ebx.b = sub_6b46c0(&var_2c, &var_ec, 0x80000002, &var_2c, &var_74) == 0
    sub_52e8a0(&var_2c)
    
    if (ebx.b != 0)
        sub_52e820(&var_2c, 0xaf4ad0)
        var_8_9.b = 0x12
        goto label_62b985
    
    if (sub_6b4360(&var_5c) != 0)
        sub_52e820(&var_2c, 0xaf4b70)
        var_8_9.b = 0x13
        goto label_62b985
    
    bool cond:5_1 = sub_5ccf10(&var_74, 0xaf4bf4) == 0
    int16_t* ecx_37 = &var_2c
    void* eax_21 = data_bac4a0
    void var_d4
    void var_a4
    int16_t* eax_41
    
    if (not(cond:5_1))
        *(eax_21 + 4) = 1
        sub_52e820(ecx_37, 0xaf4bfc)
        var_8_9.b = 0x14
        sub_684160(data_bac424, 5, &var_2c)
        var_8_9.b = 9
        sub_52e8a0(&var_2c)
        
        if (sub_6b4360(&var_8c) != 0)
            uint32_t eax_23 = sub_662930()
            int16_t esi_1 = eax_23.w
            
            if (esi_1 == 0)
                int16_t* eax_42 = sub_532b80(eax_23, data_bac510 + 0x1c, &var_a4, 0xaf4c54)
                var_8_9.b = 0x1a
                sub_684160(data_bac424, 2, eax_42)
                ecx_28 = &var_a4
                goto label_62b98d
            
            void** eax_25 = data_bac510 + 0x4c
            int16_t* eax_26 = sub_548cb0(eax_25, 0xaf4c1c, &var_2c, eax_25)
            var_8_9.b = 0x15
            sub_684160(data_bac424, 5, eax_26)
            sub_52e8a0(&var_2c)
            int16_t* eax_27 = sub_53a2c0(&var_a4)
            var_8_9.b = 0x16
            int16_t* eax_28 = sub_55c680(eax_27, eax_27, &var_d4, esi_1)
            var_8_9.b = 0x17
            int16_t* eax_29
            int32_t ecx_47
            eax_29, ecx_47 = sub_61ff20(eax_28, eax_28, &var_44, 0xaf4c30)
            int32_t var_124_4 = ecx_47
            var_8_9.b = 0x18
            sub_532840(&var_2c, eax_29)
            var_8_9.b = 0x19
            sub_684160(data_bac424, 5, &var_2c)
            sub_52e8a0(&var_2c)
            sub_52e8a0(&var_44)
            sub_52e8a0(&var_d4)
            var_8_9.b = 9
            sub_52e8a0(&var_a4)
            int16_t* eax_30 = &var_8c
            
            if (var_78_1 u>= 8)
                eax_30 = var_8c.d
            
            *eax_30 = esi_1
            int16_t* ecx_55 = &var_2c
            
            if (sub_6b4360(&var_8c) != 0)
                sub_52e820(ecx_55, 0xaf4c80)
                var_8_9.b = 0x1b
                goto label_62b985
            
            sub_52e820(ecx_55, 0xaf4ce0)
            var_8_9.b = 0x1c
            sub_684160(data_bac424, 5, &var_2c)
            var_8_9.b = 9
            sub_52e8a0(&var_2c)
        
        sub_536260(data_bac4d8, &var_5c)
        int16_t* eax_33 =
            sub_532b80(sub_536260(data_bac4d8 + 0x18, &var_8c), &var_bc, &var_d4, &data_ad900c)
        var_8_9.b = 0x1d
        int16_t* eax_34 = sub_5327a0(eax_33, eax_33, &var_a4, data_bac514)
        var_8_9.b = 0x1e
        sub_536260(data_bac4d8 + 0x30, eax_34)
        sub_52e8a0(&var_a4)
        var_8_9.b = 9
        sub_52e8a0(&var_d4)
        int16_t* eax_35 = sub_532b80(0, &var_bc, &var_44, &data_ad900c)
        var_8_9.b = 0x1f
        int16_t* eax_36 = sub_5327a0(eax_35, eax_35, &var_2c, data_bac514)
        var_8_9.b = 0x20
        int16_t* eax_37 = sub_532b80(eax_36, eax_36, &var_d4, &data_ad900c)
        var_8_9.b = 0x21
        int16_t* eax_38 = sub_532b80(eax_37, eax_37, &var_a4, u"savedata_zh")
        var_8_9.b = 0x22
        sub_536260(data_bac4d8 + 0x48, eax_38)
        sub_52e8a0(&var_a4)
        sub_52e8a0(&var_d4)
        sub_52e8a0(&var_2c)
        var_8_9.b = 9
        sub_52e8a0(&var_44)
        int16_t* eax_39 = sub_532b80(0, &var_bc, &var_2c, &data_ad900c)
        var_8_9.b = 0x23
        int16_t* eax_40 = sub_5327a0(eax_39, eax_39, &var_d4, data_bac514)
        var_8_9.b = 0x24
        eax_41 = sub_532b80(eax_40, eax_40, &var_a4, u"\__DEBUG_LOG")
        var_8_9.b = 0x25
        goto label_62bbd0
    
    *(eax_21 + 4) = 0
    sub_52e820(ecx_37, 0xaf4d0c)
    var_8_9.b = 0x26
    sub_684160(data_bac424, 5, &var_2c)
    var_8_9.b = 9
    sub_52e8a0(&var_2c)
    
    if (sub_6b4360(&var_8c) != 0)
        sub_52e820(&var_2c, 0xaf4d30)
        var_8_9.b = 0x27
        goto label_62b985
    
    sub_536260(data_bac4d8, &var_5c)
    int16_t* eax_45 =
        sub_532b80(sub_536260(data_bac4d8 + 0x18, &var_8c), &var_bc, &var_d4, &data_ad900c)
    var_8_9.b = 0x28
    int16_t* eax_46 = sub_5327a0(eax_45, eax_45, &var_a4, data_bac514)
    var_8_9.b = 0x29
    sub_536260(data_bac4d8 + 0x30, eax_46)
    sub_52e8a0(&var_a4)
    var_8_9.b = 9
    sub_52e8a0(&var_d4)
    int16_t* eax_47 = sub_532b80(0, &var_bc, &var_44, &data_ad900c)
    var_8_9.b = 0x2a
    int16_t* eax_48 = sub_5327a0(eax_47, eax_47, &var_2c, data_bac514)
    var_8_9.b = 0x2b
    int16_t* eax_49 = sub_532b80(eax_48, eax_48, &var_d4, &data_ad900c)
    var_8_9.b = 0x2c
    int16_t* eax_50 = sub_532b80(eax_49, eax_49, &var_a4, u"savedata_zh")
    var_8_9.b = 0x2d
    sub_536260(data_bac4d8 + 0x48, eax_50)
    sub_52e8a0(&var_a4)
    sub_52e8a0(&var_d4)
    sub_52e8a0(&var_2c)
    var_8_9.b = 9
    sub_52e8a0(&var_44)
    void** eax_51 = sub_532b80(0, &var_bc, &var_2c, &data_ad900c)
    var_8_9.b = 0x2e
    void** eax_52 = sub_5327a0(eax_51, eax_51, &var_d4, data_bac514)
    var_8_9.b = 0x2f
    eax_41 = sub_532b80(eax_52, eax_52, &var_a4, u"\__DEBUG_LOG")
    var_8_9.b = 0x30
label_62bbd0:
    sub_536260(data_bac4d8 + 0x60, eax_41)
    sub_52e8a0(&var_a4)
    sub_52e8a0(&var_d4)
    sub_52e8a0(&var_2c)
    sub_52e8a0(&var_74)
    sub_52e8a0(&var_8c)
    sub_52e8a0(&var_bc)
    sub_52e8a0(&var_5c)
    int32_t var_8_10 = 0xffffffff
    sub_52e8a0(&var_ec)
label_62bc2b:
    char* eax_53 = data_bac508
    
    if (*eax_53 == 0)
        int16_t* eax_65 = sub_6893c0(&var_a4)
        int32_t var_8_13 = 0x32
        int32_t* ecx_133 = data_bac4d8 + 0x78
        
        if (ecx_133 != eax_65)
            sub_52e3c0(ecx_133, eax_65, 0, 0xffffffff)
        
        int32_t var_8_14 = 0xffffffff
        sub_52e8a0(&var_a4)
        int16_t* eax_66 = sub_689420(&var_d4)
        int32_t var_8_15 = 0x33
        int32_t* ecx_136 = data_bac4d8 + 0x90
        
        if (ecx_136 != eax_66)
            sub_52e3c0(ecx_136, eax_66, 0, 0xffffffff)
        
        sub_52e8a0(&var_d4)
    else
        int32_t* ecx_120 = data_bac4d8 + 0x78
        
        if (ecx_120 != &eax_53[4])
            sub_52e3c0(ecx_120, &eax_53[4], 0, 0xffffffff)
        
        void var_104
        sub_52e820(&var_104, u"[dummy]")
        int32_t var_8_11 = 0x31
        int32_t* ecx_123 = data_bac4d8 + 0x90
        
        if (ecx_123 != &var_104)
            sub_52e3c0(ecx_123, &var_104, 0, 0xffffffff)
        
        int32_t var_8_12 = 0xffffffff
        sub_52e8a0(&var_104)
        int32_t* esi_2 = data_bac50c
        int32_t i = 0
        int32_t eax_54
        int32_t edx_35
        edx_35:eax_54 = muls.dp.d(0x2aaaaaab, esi_2[1] - *esi_2)
        int32_t edx_36 = edx_35 s>> 3
        
        if ((edx_36 u>> 0x1f) + edx_36 s> 0)
            void* ebx_1 = data_bac4d8
            int32_t edi_1 = 0
            int32_t edx_39
            
            do
                void** eax_57 = ebx_1 + 0x78
                int32_t edx_37 = eax_57[4]
                void* ecx_128 = *esi_2 + edi_1
                
                if (eax_57[5] u>= 8)
                    eax_57 = *eax_57
                
                int32_t var_120_46 = edx_37
                
                if (sub_536340(ecx_128, ecx_128, *(ecx_128 + 0x10), eax_57) == 0)
                    void** eax_61 = *esi_2 + 0x18 + edi_1
                    
                    if (ebx_1 + 0x90 != eax_61)
                        sub_52e3c0(ebx_1 + 0x90, eax_61, 0, 0xffffffff)
                        ebx_1 = data_bac4d8
                        esi_2 = data_bac50c
                
                edi_1 += 0x30
                i += 1
                int32_t eax_62
                int32_t edx_38
                edx_38:eax_62 = muls.dp.d(0x2aaaaaab, esi_2[1] - *esi_2)
                edx_39 = edx_38 s>> 3
            while (i s< (edx_39 u>> 0x1f) + edx_39)
    
    result.b = 1
else
    int16_t* eax_13 = sub_6b9ed0(&var_44)
    var_8_9.b = 0xd
    int16_t* eax_14 = sub_548cb0(eax_13, 0xaf4a8c, &var_2c, eax_13)
    var_8_9.b = 0xe
    sub_684160(data_bac424, 2, eax_14)
    sub_52e8a0(&var_2c)
    ecx_28 = &var_44
label_62b98d:
    sub_52e8a0(ecx_28)
label_62b996:
    
    if (var_60_2 u>= 8)
        j__free(var_74.d)
    
    int32_t var_60_3 = 7
    int32_t var_64_3 = 0
    var_74 = 0
    
    if (var_78_1 u>= 8)
        j__free(var_8c.d)
    
    int32_t var_78_2 = 7
    int32_t var_7c_2 = 0
    var_8c = 0
    
    if (var_a8_1 u>= 8)
        j__free(var_bc.d)
    
    int32_t var_a8_2 = 7
    int32_t var_ac_2 = 0
    var_bc = 0
    
    if (var_48_3 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_4 = 7
    int32_t var_4c_4 = 0
    var_5c = 0
    
    if (var_d8 u>= 8)
        j__free(var_ec)
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
