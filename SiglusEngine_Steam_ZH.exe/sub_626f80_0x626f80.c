// 函数: sub_626f80
// 地址: 0x626f80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c03b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_198 = arg2
int32_t var_180 = 0
void** var_168 = arg5
int32_t var_170 = 0
int32_t var_16c = 0
void* var_1cc = nullptr
int32_t var_8_1 = 1
int32_t i_1 = 0x7c
int32_t* result
int32_t var_11c
int16_t var_ec
int16_t var_d4
int16_t var_bc
int16_t var_a4
int16_t var_8c
int16_t var_74
int16_t var_5c
int32_t var_44

if (sub_55af30(arg5, &i_1, var_1cc, 1) == 0xffffffff)
    var_1cc = &var_198
    sub_60f150(&var_198, arg2, &var_ec, arg4, var_168, var_1cc, arg9)
    var_8_1.b = 0x37
    int32_t eax_71 = std::_Func_class<void,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil>::_Empty(
        &var_ec)
    
    if (eax_71.b == 0)
        int32_t var_194
        TI_OFF::TI_OFF(&var_194)
        var_8_1.b = 0x3a
        int16_t* ecx_108
        
        if (var_198 != 1)
            int32_t var_1c8_98 = arg7.d
            var_1cc = &var_194
            var_8_1.b = 0x40
            void var_1b0
            sub_54d190(&var_194, sub_6a1480(&var_1b0, &var_ec, var_1cc.b))
            var_8_1.b = 0x3a
            sub_54b010(&var_1b0)
            
            if (Concurrency::details::BoostedObject::IsScheduleGroupSegment(&var_194) == 0)
                int32_t* eax_81 = sub_745f3f(0xc)
                int32_t* eax_82
                
                if (eax_81 == 0)
                    eax_82 = nullptr
                else
                    eax_82 = PDBStream::PDBStream(eax_81)
                
                var_8_1.b = 0x45
                void var_18c
                sub_54d190(&var_170, sub_5f19d0(&var_18c, eax_82))
                var_8_1.b = 0x3a
                sub_54b010(&var_18c)
                sub_54d950(&var_1cc, &var_194)
                sub_54d1f0(&var_170)
                std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::_Move_assign(
                    var_1cc)
                goto label_628044
            
            void** eax_77 = sub_6b9ed0(&var_74)
            var_8_1.b = 0x41
            int16_t* eax_78 = sub_548cb0(eax_77, 0xaf44b4, &var_5c, var_168)
            var_8_1.b = 0x42
            int16_t* eax_79 = sub_532b80(eax_78, eax_78, &var_44, &data_af32d0)
            var_8_1.b = 0x43
            var_8_1.b = 0x44
            sub_675f80(0xa, sub_5327a0(eax_79, eax_79, &var_11c, eax_77))
            sub_52e8a0(&var_11c)
            sub_52e8a0(&var_44)
            sub_52e8a0(&var_5c)
            ecx_108 = &var_74
            goto label_627f96
        
        int32_t* var_1c8_108 = &var_194
        var_1cc = arg6.d
        var_8_1.b = 0x3b
        int32_t* var_1a8
        sub_54d190(&var_170, sub_6a2820(&var_1a8, &var_ec, var_1cc.b))
        var_8_1.b = 0x3a
        sub_54b010(&var_1a8)
        
        if (Concurrency::details::BoostedObject::IsScheduleGroupSegment(&var_170) == 0)
        label_628044:
            
            if (arg8 != 0 && *(data_bac458 + 0x490) == 0)
                void* ecx_119 = data_bac474
                int32_t var_1c8_106 = 1
                var_1cc = var_168
                sub_67e730(ecx_119, var_1cc, var_1c8_106)
            
            var_8_1.b = 0x37
            sub_54b010(&var_194)
            sub_52e8a0(&var_ec)
        label_62807c:
            sub_5b4b50(arg3, &var_170)
            int32_t var_180_5 = 1
            var_8_1.b = 0
            sub_54b010(&var_170)
        else
            void** eax_88 = sub_6b9ed0(&var_a4)
            var_8_1.b = 0x3c
            int16_t* eax_89 = sub_548cb0(eax_88, 0xaf44b4, &var_8c, var_168)
            var_8_1.b = 0x3d
            int16_t* eax_90 = sub_532b80(eax_89, eax_89, &var_d4, &data_af32d0)
            var_8_1.b = 0x3e
            var_8_1.b = 0x3f
            sub_675f80(0xa, sub_5327a0(eax_90, eax_90, &var_bc, eax_88))
            sub_52e8a0(&var_bc)
            sub_52e8a0(&var_d4)
            sub_52e8a0(&var_8c)
            ecx_108 = &var_a4
        label_627f96:
            sub_52e8a0(ecx_108)
            TI_OFF::TI_OFF(arg3)
            int32_t var_180_4 = 1
            var_8_1.b = 0x37
            sub_54b010(&var_194)
            sub_52e8a0(&var_ec)
            var_8_1.b = 0
            sub_54b010(&var_170)
    else
        int16_t* eax_72 = sub_548cb0(eax_71, 0xaf44b4, &var_44, var_168)
        var_8_1.b = 0x38
        var_8_1.b = 0x39
        sub_675f80(0xa, sub_532b80(eax_72, eax_72, &var_11c, &data_af1b40))
        sub_52e8a0(&var_11c)
        sub_52e8a0(&var_44)
        TI_OFF::TI_OFF(arg3)
        int32_t var_180_3 = 1
        sub_52e8a0(&var_ec)
        var_8_1.b = 0
        sub_54b010(&var_170)
else
    void* var_17c = nullptr
    int32_t var_178_1 = 0
    int32_t var_174_1 = 0
    var_8_1.b = 2
    int32_t var_1c8_1 = 7
    var_1cc = nullptr
    int16_t var_1dc = 0
    int32_t* eax_6
    int32_t edx
    eax_6, edx = sub_52e3c0(&var_1dc, var_168, 0, 0xffffffff)
    int32_t eax_7 = sub_6269c0(eax_6, edx, &var_17c, var_1dc)
    int32_t var_30
    int16_t var_2c
    int32_t var_18
    
    if (eax_7.b != 0)
        int32_t edi_1 = 0
        void* esi_3 = var_17c
        int32_t ecx_10 = (var_178_1 - esi_3) s>> 6
        char var_184
        var_184.d = ecx_10
        
        if (ecx_10 s<= 0)
        label_627203:
            int32_t i = 0
            int32_t var_d8_1 = 7
            int32_t var_dc_1 = 0
            var_ec = 0
            var_8_1.b = 0xc
            i_1 = 0
            int32_t var_48
            
            if (ecx_10 s> 0)
                do
                    int16_t var_14c
                    int16_t var_134
                    int32_t var_108
                    int16_t var_104
                    void** eax_42
                    
                    if (i != 0)
                        void* esi_8 = esi_3 + (i << 6)
                        var_198 = esi_8
                        int16_t* eax_45 = sub_548cb0(esi_8 + 0x18, 0xaf4584, &var_11c, esi_8 + 0x18)
                        void* const var_1c8_62 = 0xffffffff
                        var_1cc = nullptr
                        var_8_1.b = 0x25
                        int32_t ecx_56 = sub_532870(&var_ec, eax_45, var_1cc, var_1c8_62)
                        var_8_1.b = 0xc
                        
                        if (var_108 u>= 8)
                            ecx_56 = j__free(var_11c)
                        
                        *(esi_8 + 0x3c)
                        int32_t var_1c8_64 = ecx_56
                        void** eax_46 = sub_6ad9b0(&var_11c)
                        var_8_1.b = 0x26
                        *(esi_8 + 0x30)
                        void** eax_47 = sub_6ad9b0(&var_2c)
                        var_8_1.b = 0x27
                        *(esi_8 + 0x38)
                        void** eax_48 = sub_6ad9b0(&var_14c)
                        var_8_1.b = 0x28
                        *(var_198 + 0x34)
                        void** eax_49 = sub_6ad9b0(&var_134)
                        var_8_1.b = 0x29
                        void** eax_50 = sub_548cb0(eax_49, 0xad94e4, &var_104, eax_49)
                        var_8_1.b = 0x2a
                        void** eax_51 = sub_532b80(eax_50, eax_50, &var_a4, &data_aee74c)
                        var_8_1.b = 0x2b
                        void** eax_52 = sub_5327a0(eax_51, eax_51, &var_8c, eax_48)
                        var_8_1.b = 0x2c
                        void** eax_53 = sub_532b80(eax_52, eax_52, &var_d4, &data_aee74c)
                        var_8_1.b = 0x2d
                        void** eax_54 = sub_5327a0(eax_53, eax_53, &var_bc, eax_47)
                        var_8_1.b = 0x2e
                        void** eax_55 = sub_532b80(eax_54, eax_54, &var_74, u",blend=")
                        var_8_1.b = 0x2f
                        void** eax_56 = sub_5327a0(eax_55, eax_55, &var_5c, eax_46)
                        var_8_1.b = 0x30
                        eax_42 = sub_532b80(eax_56, eax_56, &var_44, &data_ad90a0)
                        var_8_1.b = 0x31
                        goto label_627a34
                    
                    int32_t var_138
                    int32_t var_120
                    int32_t var_f0
                    int32_t var_c0
                    int32_t var_a8
                    int32_t var_90
                    int32_t var_78
                    int32_t var_60
                    
                    if (*(esi_3 + 0x28) != i)
                        void* const var_1c8_51 = 0xffffffff
                        var_1cc = nullptr
                        int32_t ecx_41 = sub_532870(&var_ec, esi_3 + 0x18, var_1cc, var_1c8_51)
                        *(esi_3 + 0x3c)
                        int32_t var_1c8_52 = ecx_41
                        void** eax_31 = sub_6ad9b0(&var_11c)
                        var_8_1.b = 0x19
                        *(esi_3 + 0x30)
                        void** eax_32 = sub_6ad9b0(&var_2c)
                        var_8_1.b = 0x1a
                        *(esi_3 + 0x38)
                        void** eax_33 = sub_6ad9b0(&var_14c)
                        var_8_1.b = 0x1b
                        *(var_17c + 0x34)
                        void** eax_34 = sub_6ad9b0(&var_134)
                        var_8_1.b = 0x1c
                        void** eax_35 = sub_548cb0(eax_34, 0xad94e4, &var_104, eax_34)
                        var_8_1.b = 0x1d
                        void** eax_36 = sub_532b80(eax_35, eax_35, &var_a4, &data_aee74c)
                        var_8_1.b = 0x1e
                        void** eax_37 = sub_5327a0(eax_36, eax_36, &var_8c, eax_33)
                        var_8_1.b = 0x1f
                        void** eax_38 = sub_532b80(eax_37, eax_37, &var_d4, &data_aee74c)
                        var_8_1.b = 0x20
                        void** eax_39 = sub_5327a0(eax_38, eax_38, &var_bc, eax_32)
                        var_8_1.b = 0x21
                        void** eax_40 = sub_532b80(eax_39, eax_39, &var_74, u",blend=")
                        var_8_1.b = 0x22
                        void** eax_41 = sub_5327a0(eax_40, eax_40, &var_5c, eax_31)
                        var_8_1.b = 0x23
                        eax_42 = sub_532b80(eax_41, eax_41, &var_44, &data_ad90a0)
                        var_8_1.b = 0x24
                    label_627a34:
                        void* const var_1c8_73 = 0xffffffff
                        var_1cc = nullptr
                        ecx_10 = sub_532870(&var_ec, eax_42, var_1cc, var_1c8_73)
                        
                        if (var_30 u>= 8)
                            ecx_10 = j__free(var_44)
                        
                        var_30 = 7
                        var_44.w = 0
                        int32_t var_34_2 = 0
                        
                        if (var_48 u>= 8)
                            ecx_10 = j__free(var_5c.d)
                        
                        var_48 = 7
                        var_5c = 0
                        int32_t var_4c_2 = 0
                        
                        if (var_60 u>= 8)
                            ecx_10 = j__free(var_74.d)
                        
                        var_60 = 7
                        var_74 = 0
                        int32_t var_64_2 = 0
                        
                        if (var_a8 u>= 8)
                            ecx_10 = j__free(var_bc.d)
                        
                        var_a8 = 7
                        var_bc = 0
                        int32_t var_ac_2 = 0
                        
                        if (var_c0 u>= 8)
                            ecx_10 = j__free(var_d4.d)
                        
                        var_c0 = 7
                        var_d4 = 0
                        int32_t var_c4_2 = 0
                        
                        if (var_78 u>= 8)
                            ecx_10 = j__free(var_8c.d)
                        
                        var_78 = 7
                        var_8c = 0
                        int32_t var_7c_2 = 0
                        
                        if (var_90 u>= 8)
                            ecx_10 = j__free(var_a4.d)
                        
                        var_90 = 7
                        var_a4 = 0
                        int32_t var_94_2 = 0
                        
                        if (var_f0 u>= 8)
                            ecx_10 = j__free(var_104.d)
                        
                        var_f0 = 7
                        var_104 = 0
                        int32_t var_f4_2 = 0
                        
                        if (var_120 u>= 8)
                            ecx_10 = j__free(var_134.d)
                        
                        var_120 = 7
                        var_134 = 0
                        int32_t var_124_2 = 0
                        
                        if (var_138 u>= 8)
                            ecx_10 = j__free(var_14c.d)
                        
                        var_138 = 7
                        var_14c = 0
                        int32_t var_13c_2 = 0
                        
                        if (var_18 u>= 8)
                            ecx_10 = j__free(var_2c.d)
                        
                        var_18 = 7
                        var_2c = 0
                        int32_t var_1c_6 = 0
                    else
                        *(esi_3 + 0x3c)
                        int32_t var_1c8_11 = ecx_10
                        int16_t* eax_12 = sub_6ad9b0(&var_11c)
                        var_8_1.b = 0xd
                        *(esi_3 + 0x30)
                        int16_t* eax_13 = sub_6ad9b0(&var_44)
                        var_8_1.b = 0xe
                        *(esi_3 + 0x38)
                        int16_t* eax_14 = sub_6ad9b0(&var_5c)
                        var_8_1.b = 0xf
                        *(var_17c + 0x34)
                        int16_t* eax_15 = sub_6ad9b0(&var_74)
                        var_8_1.b = 0x10
                        int16_t* eax_16 = sub_548cb0(eax_15, 0xad94e4, &var_bc, eax_15)
                        var_8_1.b = 0x11
                        int16_t* eax_17 = sub_532b80(eax_16, eax_16, &var_d4, &data_aee74c)
                        var_8_1.b = 0x12
                        int16_t* eax_18 = sub_5327a0(eax_17, eax_17, &var_8c, eax_14)
                        var_8_1.b = 0x13
                        int16_t* eax_19 = sub_532b80(eax_18, eax_18, &var_a4, &data_aee74c)
                        var_8_1.b = 0x14
                        int16_t* eax_20 = sub_5327a0(eax_19, eax_19, &var_104, eax_13)
                        var_8_1.b = 0x15
                        int16_t* eax_21 = sub_532b80(eax_20, eax_20, &var_134, u",blend=")
                        var_8_1.b = 0x16
                        int16_t* eax_22 = sub_5327a0(eax_21, eax_21, &var_14c, eax_12)
                        var_8_1.b = 0x17
                        int16_t* eax_23 = sub_532b80(eax_22, eax_22, &var_2c, &data_ad90a0)
                        void* const var_1c8_20 = 0xffffffff
                        var_1cc = nullptr
                        var_8_1.b = 0x18
                        ecx_10 = sub_532870(&var_ec, eax_23, var_1cc, var_1c8_20)
                        
                        if (var_18 u>= 8)
                            ecx_10 = j__free(var_2c.d)
                        
                        var_18 = 7
                        int32_t var_1c_2 = 0
                        var_2c = 0
                        
                        if (var_138 u>= 8)
                            ecx_10 = j__free(var_14c.d)
                        
                        var_138 = 7
                        int32_t var_13c_1 = 0
                        var_14c = 0
                        
                        if (var_120 u>= 8)
                            ecx_10 = j__free(var_134.d)
                        
                        var_120 = 7
                        int32_t var_124_1 = 0
                        var_134 = 0
                        
                        if (var_f0 u>= 8)
                            ecx_10 = j__free(var_104.d)
                        
                        var_f0 = 7
                        int32_t var_f4_1 = 0
                        var_104 = 0
                        
                        if (var_90 u>= 8)
                            ecx_10 = j__free(var_a4.d)
                        
                        var_90 = 7
                        int32_t var_94_1 = 0
                        var_a4 = 0
                        
                        if (var_78 u>= 8)
                            ecx_10 = j__free(var_8c.d)
                        
                        var_78 = 7
                        int32_t var_7c_1 = 0
                        var_8c = 0
                        
                        if (var_c0 u>= 8)
                            ecx_10 = j__free(var_d4.d)
                        
                        var_c0 = 7
                        int32_t var_c4_1 = 0
                        var_d4 = 0
                        
                        if (var_a8 u>= 8)
                            ecx_10 = j__free(var_bc.d)
                        
                        var_a8 = 7
                        int32_t var_ac_1 = 0
                        var_bc = 0
                        
                        if (var_60 u>= 8)
                            ecx_10 = j__free(var_74.d)
                        
                        var_60 = 7
                        int32_t var_64_1 = 0
                        var_74 = 0
                        
                        if (var_48 u>= 8)
                            ecx_10 = j__free(var_5c.d)
                        
                        var_48 = 7
                        int32_t var_4c_1 = 0
                        var_5c = 0
                        
                        if (var_30 u>= 8)
                            ecx_10 = j__free(var_44)
                        
                        var_30 = 7
                        int32_t var_34_1 = 0
                        var_44.w = 0
                    var_8_1.b = 0xc
                    
                    if (var_108 u>= 8)
                        ecx_10 = j__free(var_11c)
                    
                    esi_3 = var_17c
                    i = i_1 + 1
                    i_1 = i
                while (i s< var_184.d)
            
            int32_t var_1c8_86 = ecx_10
            var_1cc = arg6.d
            var_8_1.b = 0x32
            int32_t* var_19c
            sub_54d190(&var_170, sub_6a2820(&var_19c, &var_ec, var_1cc.b))
            var_8_1.b = 0xc
            void* esi_10 = var_198
            
            if (esi_10 != 0)
                bool cond:2_1 = *(esi_10 + 4) != 1
                *(esi_10 + 4)
                *(esi_10 + 4) -= 1
                
                if (not(cond:2_1))
                    (*(*esi_10 + 4))(eax_2)
                    int32_t edi_9 = *(esi_10 + 8)
                    *(esi_10 + 8) -= 1
                    
                    if (edi_9 == 1)
                        (*(*esi_10 + 8))()
            
            if (var_170 != 0)
                if (arg8 != 0 && *(data_bac458 + 0x490) == 0)
                    void* esi_12 = nullptr
                    int32_t eax_68 = sub_6295f0(&var_17c)
                    
                    if (eax_68 s> 0)
                        do
                            int32_t var_1c8_94 = 1
                            var_1cc = esi_12
                            void* eax_69 =
                                pdb_internal::Array<struct C11Lines::C13FileLineInfo>::operator[](
                                &var_17c, var_1cc)
                            void* ecx_86 = data_bac474
                            var_1cc = eax_69
                            sub_67e730(ecx_86, var_1cc, var_1c8_94)
                            esi_12 += 1
                        while (esi_12 s< eax_68)
                
                sub_52e8a0(&var_ec)
                sub_6281a0(&var_17c)
                goto label_62807c
            
            int16_t* eax_63 = sub_6b9ed0(&var_74)
            var_8_1.b = 0x33
            int16_t* eax_64 = sub_548cb0(eax_63, 0xaf4588, &var_11c, var_168)
            var_8_1.b = 0x34
            int16_t* eax_65 = sub_532b80(eax_64, eax_64, &var_5c, &data_af32d0)
            var_8_1.b = 0x35
            int16_t* eax_66 = sub_5327a0(eax_65, eax_65, &var_44, eax_63)
            var_8_1.b = 0x36
            struct _EXCEPTION_REGISTRATION_RECORD*** ecx_78 = data_bac424
            var_1cc = 0xa
            sub_684160(ecx_78, var_1cc, eax_66)
            
            if (var_30 u>= 8)
                j__free(var_44)
            
            int32_t var_30_1 = 7
            int32_t var_34_3 = 0
            var_44.w = 0
            
            if (var_48 u>= 8)
                j__free(var_5c.d)
            
            int32_t var_48_1 = 7
            int32_t var_4c_3 = 0
            var_5c = 0
            sub_52e8a0(&var_11c)
            sub_52e8a0(&var_74)
            TI_OFF::TI_OFF(arg3)
            int32_t var_180_2 = 1
            sub_52e8a0(&var_ec)
            sub_6281a0(&var_17c)
            var_8_1.b = 0
            sub_54b010(&var_170)
        else
            int32_t* esi_4 = esi_3 + 0x18
            
            while (true)
                if (edi_1 s> 0 && esi_4[-2] == 0)
                    int32_t var_1c8_32 = ecx_10
                    void** eax_24 = sub_6ad9b0(&var_44)
                    var_8_1.b = 5
                    int32_t* eax_25 = sub_532b80(eax_24, eax_24, &var_2c, &data_af44f0)
                    var_8_1.b = 6
                    struct _EXCEPTION_REGISTRATION_RECORD*** ecx_28 = data_bac424
                    var_1cc = 0xa
                    void* ecx_29 = sub_684160(ecx_28, var_1cc, eax_25)
                    
                    if (var_18 u>= 8)
                        ecx_29 = j__free(var_2c.d)
                    
                    int32_t var_18_2 = 7
                    int32_t var_1c_3 = 0
                    var_2c = 0
                    
                    if (var_30 u>= 8)
                        ecx_29 = j__free(var_44)
                    
                    *arg3 = 0
                    arg3[1] = 0
                    void* ebx_2 = var_17c
                    
                    if (ebx_2 != 0)
                        int32_t* var_1c8_37 = arg3
                        var_1cc = ecx_29
                        sub_629800(ebx_2, var_178_1)
                        j__free(ebx_2)
                    
                    result = arg3
                    goto label_62809f
                
                if (esi_4[-2] != 0)
                    void* edx_3 = var_198
                    var_1cc = &i_1
                    int16_t var_164
                    int16_t* eax_11 =
                        sub_60f150(&esi_4[-6], edx_3, &var_164, arg4, &esi_4[-6], var_1cc, arg9)
                    var_8_1.b = 7
                    int32_t var_154
                    int32_t var_150
                    
                    if (var_154 == 0)
                        void* ebx_3 = var_17c
                        int16_t* eax_28 =
                            sub_548cb0(eax_11, 0xaf44b4, &var_44, (edi_1 << 6) + ebx_3)
                        var_8_1.b = 8
                        int16_t* eax_29 = sub_532b80(eax_28, eax_28, &var_2c, &data_af1b40)
                        var_8_1.b = 9
                        struct _EXCEPTION_REGISTRATION_RECORD*** ecx_37 = data_bac424
                        var_1cc = 0xa
                        void* ecx_38 = sub_684160(ecx_37, var_1cc, eax_29)
                        
                        if (var_18 u>= 8)
                            ecx_38 = j__free(var_2c.d)
                        
                        int32_t var_18_4 = 7
                        int32_t var_1c_5 = 0
                        var_2c = 0
                        
                        if (var_30 u>= 8)
                            ecx_38 = j__free(var_44)
                        
                        *arg3 = 0
                        arg3[1] = 0
                        
                        if (var_150 u>= 8)
                            ecx_38 = j__free(var_164.d)
                        
                        int32_t var_150_2 = 7
                        int32_t var_154_2 = 0
                        var_164 = 0
                        
                        if (ebx_3 != 0)
                            int32_t* var_1c8_50 = arg3
                            var_1cc = ecx_38
                            sub_629800(ebx_3, var_178_1)
                            j__free(ebx_3)
                        
                        result = arg3
                        goto label_62809f
                    
                    if (i_1 != 1)
                        int16_t* eax_26 =
                            sub_548cb0(eax_11, 0xaf4560, &var_44, (edi_1 << 6) + var_17c)
                        var_8_1.b = 0xa
                        int16_t* eax_27 = sub_532b80(eax_26, eax_26, &var_2c, &data_af4518)
                        var_8_1.b = 0xb
                        struct _EXCEPTION_REGISTRATION_RECORD*** ecx_33 = data_bac424
                        var_1cc = 0xa
                        sub_684160(ecx_33, var_1cc, eax_27)
                        
                        if (var_18 u>= 8)
                            j__free(var_2c.d)
                        
                        int32_t var_18_3 = 7
                        int32_t var_1c_4 = 0
                        var_2c = 0
                        
                        if (var_30 u>= 8)
                            j__free(var_44)
                        
                        *arg3 = 0
                        arg3[1] = 0
                        int32_t var_180_1 = 1
                        
                        if (var_150 u>= 8)
                            j__free(var_164.d)
                        
                        int32_t var_150_1 = 7
                        int32_t var_154_1 = 0
                        var_164 = 0
                        sub_6281a0(&var_17c)
                        break
                    
                    if (esi_4 != &var_164)
                        void* const var_1c8_9 = 0xffffffff
                        var_1cc = nullptr
                        sub_52e3c0(esi_4, &var_164, var_1cc, var_1c8_9)
                    
                    var_8_1.b = 2
                    
                    if (var_150 u>= 8)
                        j__free(var_164.d)
                    
                    ecx_10 = var_184.d
                
                edi_1 += 1
                esi_4 = &esi_4[0x10]
                
                if (edi_1 s>= ecx_10)
                    esi_3 = var_17c
                    goto label_627203
            
            var_8_1.b = 0
            sub_54b010(&var_170)
    else
        int16_t* eax_8 = sub_548cb0(eax_7, 0xaf44b4, &var_44, var_168)
        var_8_1.b = 3
        int16_t* eax_9 = sub_532b80(eax_8, eax_8, &var_2c, &data_af44d0)
        var_8_1.b = 4
        struct _EXCEPTION_REGISTRATION_RECORD*** ecx_5 = data_bac424
        var_1cc = 0xa
        void* ecx_6 = sub_684160(ecx_5, var_1cc, eax_9)
        
        if (var_18 u>= 8)
            ecx_6 = j__free(var_2c.d)
        
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        var_2c = 0
        
        if (var_30 u>= 8)
            ecx_6 = j__free(var_44)
        
        *arg3 = 0
        arg3[1] = 0
        void* esi_2 = var_17c
        
        if (esi_2 != 0)
            int32_t* var_1c8_7 = arg3
            var_1cc = ecx_6
            sub_629800(esi_2, var_178_1)
            j__free(esi_2)
result = arg3
label_62809f:
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
