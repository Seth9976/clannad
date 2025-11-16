// 函数: sub_62e570
// 地址: 0x62e570
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c0ef0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3
int32_t* ecx
eax_3, ecx = sub_745f3f(0x18)

if (eax_3 == 0)
    eax_3 = 0
else
    __builtin_memset(eax_3, 0, 0x18)

int32_t var_4c = eax_3
int32_t* var_48 = nullptr
int32_t var_8_1 = 0
int32_t* var_68 = &var_48
sub_633070(eax_3, eax_3, ecx)
int32_t var_8_2 = 1
int32_t* edi = nullptr
int32_t* ebx = data_4ebe2b0
int32_t eax_4 = var_4c
int32_t* ecx_1 = var_48
var_48 = nullptr
var_4c = 0
data_4ebe2ac = eax_4
data_4ebe2b0 = ecx_1

if (ebx != 0)
    bool cond:0_1 = ebx[1] != 1
    ebx[1]
    ebx[1] -= 1
    
    if (not(cond:0_1))
        (*(*ebx + 4))(eax_2)
        bool cond:2_1 = ebx[2] != 1
        ebx[2]
        ebx[2] -= 1
        
        if (not(cond:2_1))
            (*(*ebx + 8))()
    
    edi = var_48

int32_t var_8_3 = 0xffffffff

if (edi != 0)
    bool cond:1_1 = edi[1] != 1
    edi[1]
    edi[1] -= 1
    
    if (not(cond:1_1))
        (*(*edi + 4))(eax_2)
        bool cond:3_1 = edi[2] != 1
        edi[2]
        edi[2] -= 1
        
        if (not(cond:3_1))
            (*(*edi + 8))()

int32_t var_70 = 0x14
bool result
int32_t var_44
int16_t var_2c
int16_t* eax_15

if (sub_6fcf40(data_4ebe2ac, 0x20, 0x44) != 0)
    int32_t eax_16
    int32_t* ecx_12
    eax_16, ecx_12 = sub_745f3f(0x18)
    
    if (eax_16 == 0)
        eax_16 = 0
    else
        __builtin_memset(eax_16, 0, 0x18)
    
    var_4c = eax_16
    var_48 = nullptr
    int32_t var_8_5 = 4
    int32_t** var_68_5 = &var_48
    sub_633070(eax_16, eax_16, ecx_12)
    int32_t var_8_6 = 5
    int32_t* edi_1 = nullptr
    int32_t* ebx_1 = data_4ebe2b8
    int32_t eax_17 = var_4c
    int32_t* ecx_13 = var_48
    var_48 = nullptr
    var_4c = 0
    data_4ebe2b4 = eax_17
    data_4ebe2b8 = ecx_13
    
    if (ebx_1 != 0)
        bool cond:5_1 = ebx_1[1] != 1
        ebx_1[1]
        ebx_1[1] -= 1
        
        if (not(cond:5_1))
            (*(*ebx_1 + 4))(eax_2)
            bool cond:7_1 = ebx_1[2] != 1
            ebx_1[2]
            ebx_1[2] -= 1
            
            if (not(cond:7_1))
                (*(*ebx_1 + 8))()
        
        edi_1 = var_48
    
    int32_t var_8_7 = 0xffffffff
    
    if (edi_1 != 0)
        bool cond:6_1 = edi_1[1] != 1
        edi_1[1]
        edi_1[1] -= 1
        
        if (not(cond:6_1))
            (*(*edi_1 + 4))(eax_2)
            bool cond:8_1 = edi_1[2] != 1
            edi_1[2]
            edi_1[2] -= 1
            
            if (not(cond:8_1))
                (*(*edi_1 + 8))()
    
    int32_t var_70_1 = 0x10
    
    if (sub_6fcf40(data_4ebe2b4, 0x20, 0x42) == 0)
        void** eax_27 = sub_6b9ed0(&var_44)
        int32_t var_8_8 = 6
        eax_15 = sub_548cb0(eax_27, u"Direct3D", &var_2c, eax_27)
        var_8_8.b = 7
        goto label_62e6c0
    
    int32_t eax_28
    int32_t* ecx_23
    eax_28, ecx_23 = sub_745f3f(0x18)
    
    if (eax_28 == 0)
        eax_28 = 0
    else
        __builtin_memset(eax_28, 0, 0x18)
    
    var_4c = eax_28
    var_48 = nullptr
    int32_t var_8_9 = 8
    int32_t** var_68_7 = &var_48
    sub_633070(eax_28, eax_28, ecx_23)
    int32_t var_8_10 = 9
    sub_54d190(&data_4ebe2bc, &var_4c)
    int32_t var_8_11 = 0xffffffff
    int32_t* edi_2 = var_48
    
    if (edi_2 != 0)
        bool cond:9_1 = edi_2[1] != 1
        edi_2[1]
        edi_2[1] -= 1
        
        if (not(cond:9_1))
            (*(*edi_2 + 4))(eax_2)
            int32_t esi_1 = edi_2[2]
            edi_2[2] -= 1
            
            if (esi_1 == 1)
                (*(*edi_2 + 8))()
    
    int32_t var_70_2 = 0x1c
    
    if (sub_6fcf40(data_4ebe2bc, 0x20, 0x144) == 0)
        void** eax_34 = sub_6b9ed0(&var_44)
        int32_t var_8_12 = 0xa
        eax_15 = sub_548cb0(eax_34, u"Direct3D", &var_2c, eax_34)
        var_8_12.b = 0xb
        goto label_62e6c0
    
    int32_t* eax_35
    int32_t* ecx_30
    eax_35, ecx_30 = sub_745f3f(0x18)
    int32_t eax_36
    
    if (eax_35 == 0)
        eax_36 = 0
    else
        ecx_30 = eax_35
        eax_36 = sub_662020(ecx_30)
    
    var_4c = eax_36
    var_48 = nullptr
    int32_t var_8_13 = 0xc
    int32_t** var_68_10 = &var_48
    sub_633070(eax_36, eax_36, ecx_30)
    int32_t var_8_14 = 0xd
    sub_54d190(&data_4ebe2c4, &var_4c)
    int32_t var_8_15 = 0xffffffff
    sub_54b010(&var_4c)
    int32_t var_70_3 = 0x24
    int16_t* eax_39
    
    if (sub_6fcf40(data_4ebe2c4, 0x20, 0x244) != 0)
        int32_t eax_40 = sub_745f3f(0x18)
        int32_t eax_41
        
        if (eax_40 == 0)
            eax_41 = 0
        else
            eax_41 = sub_662020(eax_40)
        
        int32_t var_8_17 = 0x10
        sub_54d190(&data_4ebe2cc, sub_632010(&var_4c, eax_41))
        int32_t var_8_18 = 0xffffffff
        sub_54b010(&var_4c)
        int32_t var_70_4 = 0x24
        
        if (sub_6fcf40(data_4ebe2cc, 0x20, 0x152) == 0)
            int16_t* eax_44 = sub_6b9ed0(&var_2c)
            int32_t var_8_19 = 0x11
            eax_39 = sub_548cb0(eax_44, u"Direct3D", &var_44, eax_44)
            var_8_19.b = 0x12
            goto label_62e9ae
        
        int32_t eax_45 = sub_745f3f(0x18)
        int32_t eax_46
        
        if (eax_45 == 0)
            eax_46 = 0
        else
            eax_46 = sub_662020(eax_45)
        
        int32_t var_8_20 = 0x13
        sub_54d190(&data_4ebe2d4, sub_632010(&var_4c, eax_46))
        int32_t var_8_21 = 0xffffffff
        sub_54b010(&var_4c)
        int32_t var_70_5 = 0x1c
        
        if (sub_6fcf40(data_4ebe2d4, 0x20, 0x144) == 0)
            void** eax_49 = sub_6b9ed0(&var_2c)
            int32_t var_8_22 = 0x14
            eax_39 = sub_548cb0(eax_49, u"Direct3D", &var_44, eax_49)
            var_8_22.b = 0x15
            goto label_62e9ae
        
        int32_t eax_50 = sub_745f3f(0x18)
        int32_t eax_51
        
        if (eax_50 == 0)
            eax_51 = 0
        else
            eax_51 = sub_662020(eax_50)
        
        int32_t var_8_23 = 0x16
        sub_54d190(&data_4ebe2dc, sub_632010(&var_4c, eax_51))
        int32_t var_8_24 = 0xffffffff
        sub_54b010(&var_4c)
        int32_t var_70_6 = 0x18
        
        if (sub_6fcf40(data_4ebe2dc, 0x20, 0x142) == 0)
            void** eax_54 = sub_6b9ed0(&var_2c)
            int32_t var_8_25 = 0x17
            eax_39 = sub_548cb0(eax_54, u"Direct3D", &var_44, eax_54)
            var_8_25.b = 0x18
            goto label_62e9ae
        
        int32_t eax_55 = sub_745f3f(0x18)
        int32_t eax_56
        
        if (eax_55 == 0)
            eax_56 = 0
        else
            eax_56 = sub_662020(eax_55)
        
        int32_t var_8_26 = 0x19
        sub_54d190(&data_4ebe2e4, sub_632010(&var_4c, eax_56))
        int32_t var_8_27 = 0xffffffff
        sub_54b010(&var_4c)
        int32_t var_70_7 = 0x24
        
        if (sub_6fcf40(data_4ebe2e4, 0x20, 0x244) == 0)
            void** eax_59 = sub_6b9ed0(&var_2c)
            int32_t var_8_28 = 0x1a
            eax_39 = sub_548cb0(eax_59, u"Direct3D", &var_44, eax_59)
            var_8_28.b = 0x1b
            goto label_62e9ae
        
        int32_t* eax_60
        int32_t* ecx_62
        eax_60, ecx_62 = sub_745f3f(0x10)
        
        if (eax_60 == 0)
            eax_60 = nullptr
        else
            *eax_60 = 0
            eax_60[1] = 0
            eax_60[2] = 0
            eax_60[3] = 0
        
        int32_t* var_54 = eax_60
        int32_t var_50 = 0
        int32_t var_8_29 = 0x1c
        int32_t* var_68_26 = &var_50
        sub_6330e0(eax_60, eax_60, ecx_62)
        int32_t var_8_30 = 0x1d
        sub_630af0(&var_54)
        int32_t var_8_31 = 0xffffffff
        sub_54b010(&var_54)
        result = sub_626200(0x100) != 0
    else
        int16_t* eax_38 = sub_6b9ed0(&var_2c)
        int32_t var_8_16 = 0xe
        eax_39 = sub_548cb0(eax_38, u"Direct3D", &var_44, eax_38)
        var_8_16.b = 0xf
    label_62e9ae:
        sub_684160(data_bac424, 2, eax_39)
        sub_52e8a0(&var_44)
        sub_52e8a0(&var_2c)
        result = false
else
    int16_t* eax_14 = sub_6b9ed0(&var_44)
    int32_t var_8_4 = 2
    eax_15 = sub_548cb0(eax_14, u"Direct3D", &var_2c, eax_14)
    var_8_4.b = 3
label_62e6c0:
    sub_684160(data_bac424, 2, eax_15)
    int32_t var_18
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    var_2c = 0
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44)
    
    result = false
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
