// 函数: sub_42800a
// 地址: 0x42800a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t eax = arg1[1]
int32_t* result_1

if (eax s> 0x31545844)
    switch (eax)
        case 0x32545844
            void*** eax_62 = sub_745f3f(0x100)
            
            if (eax_62 == 0)
                goto label_42874d
            
            int80_t st0_45
            st0_45, result_1 = sub_427fcc(eax_62, arg1)
            goto label_428749
        case 0x32595559
            void*** eax_61 = sub_745f3f(0xb0)
            
            if (eax_61 == 0)
                goto label_42874d
            
            int80_t st0_44
            st0_44, result_1 = sub_427faf(eax_61, arg1)
            goto label_428749
        case 0x33545844
            void*** eax_60 = sub_745f3f(0x100)
            
            if (eax_60 == 0)
                goto label_42874d
            
            int80_t st0_43
            st0_43, result_1 = sub_427fcc(eax_60, arg1)
            goto label_428749
        case 0x34545844
            void*** eax_59 = sub_745f3f(0x100)
            
            if (eax_59 == 0)
                goto label_42874d
            
            int80_t st0_42
            st0_42, result_1 = sub_427fcc(eax_59, arg1)
            goto label_428749
        case 0x35545844
            void*** eax_58 = sub_745f3f(0x100)
            
            if (eax_58 == 0)
                goto label_42874d
            
            int80_t st0_41
            st0_41, result_1 = sub_427fcc(eax_58, arg1)
            goto label_428749
        case 0x36314c41
            void*** eax_63 = sub_745f3f(0x80)
            
            if (eax_63 == 0)
                goto label_42874d
            
            int80_t st0_46
            st0_46, result_1 = sub_425100(eax_63, arg1)
            goto label_428749
        case 0x36315220
            void*** eax_67 = sub_745f3f(0x80)
            
            if (eax_67 == 0)
                goto label_42874d
            
            int80_t st0_50
            st0_50, result_1 = sub_425121(eax_67, arg1)
            goto label_428749
        case 0x42475247
            void*** eax_66 = sub_745f3f(0xb0)
            
            if (eax_66 == 0)
                goto label_42874d
            
            int80_t st0_49
            st0_49, result_1 = sub_427faf(eax_66, arg1)
            goto label_428749
        case 0x47424752
            void*** eax_65 = sub_745f3f(0xb0)
            
            if (eax_65 == 0)
                goto label_42874d
            
            int80_t st0_48
            st0_48, result_1 = sub_427faf(eax_65, arg1)
            goto label_428749
        case 0x59565955
            void*** eax_64 = sub_745f3f(0xb0)
            
            if (eax_64 == 0)
                goto label_42874d
            
            int80_t st0_47
            st0_47, result_1 = sub_427faf(eax_64, arg1)
            goto label_428749
else if (eax == 0x31545844)
    void*** eax_57 = sub_745f3f(0x100)
    int32_t* result
    
    if (eax_57 == 0)
    label_42874d:
        result = nullptr
    else
        int80_t st0_40
        st0_40, result_1 = sub_427fcc(eax_57, arg1)
    label_428749:
        result = result_1
    
    if (result != 0)
        int32_t eax_68
        
        if (result[7] != 0)
            eax_68 = sub_41ed27(result, arg1)
            unimplemented  {call 0x41ed27}
        
        if (result[7] == 0 || eax_68 s>= 0)
            if (result[6] != 0)
                (*(*result + 0xc))()
            
            return result
        
        (**result)(1)
else if (eax s<= 0x32)
    if (eax == 0x32)
        void*** eax_21 = sub_745f3f(0x80)
        
        if (eax_21 == 0)
            goto label_42874d
        
        int80_t st0_20
        st0_20, result_1 = sub_424485(eax_21, arg1)
        goto label_428749
    
    if (eax - 0x14 u<= 0x15)
        switch (eax)
            case 0x14
                void*** eax_2 = sub_745f3f(0x80)
                
                if (eax_2 == 0)
                    goto label_42874d
                
                int80_t st0_1
                st0_1, result_1 = sub_423811(eax_2, arg1)
                goto label_428749
            case 0x15
                void*** eax_3 = sub_745f3f(0x80)
                
                if (eax_3 == 0)
                    goto label_42874d
                
                int80_t st0_2
                st0_2, result_1 = sub_423832(eax_3, arg1)
                goto label_428749
            case 0x16
                void*** eax_4 = sub_745f3f(0x80)
                
                if (eax_4 == 0)
                    goto label_42874d
                
                int80_t st0_3
                st0_3, result_1 = sub_423853(eax_4, arg1)
                goto label_428749
            case 0x17
                void*** eax_5 = sub_745f3f(0x80)
                
                if (eax_5 == 0)
                    goto label_42874d
                
                int80_t st0_4
                st0_4, result_1 = sub_423b8f(eax_5, arg1)
                goto label_428749
            case 0x18
                void*** eax_6 = sub_745f3f(0x80)
                
                if (eax_6 == 0)
                    goto label_42874d
                
                int80_t st0_5
                st0_5, result_1 = sub_423bb0(eax_6, arg1)
                goto label_428749
            case 0x19
                void*** eax_7 = sub_745f3f(0x80)
                
                if (eax_7 == 0)
                    goto label_42874d
                
                int80_t st0_6
                st0_6, result_1 = sub_423bd1(eax_7, arg1)
                goto label_428749
            case 0x1a
                void*** eax_8 = sub_745f3f(0x80)
                
                if (eax_8 == 0)
                    goto label_42874d
                
                int80_t st0_7
                st0_7, result_1 = sub_423bf2(eax_8, arg1)
                goto label_428749
            case 0x1b
                void*** eax_9 = sub_745f3f(0x80)
                
                if (eax_9 == 0)
                    goto label_42874d
                
                int80_t st0_8
                st0_8, result_1 = sub_423c34(eax_9, arg1)
                goto label_428749
            case 0x1c
                void*** eax_10 = sub_745f3f(0x80)
                
                if (eax_10 == 0)
                    goto label_42874d
                
                int80_t st0_9
                st0_9, result_1 = sub_423c55(eax_10, arg1)
                goto label_428749
            case 0x1d
                void*** eax_11 = sub_745f3f(0x80)
                
                if (eax_11 == 0)
                    goto label_42874d
                
                int80_t st0_10
                st0_10, result_1 = sub_423c76(eax_11, arg1)
                goto label_428749
            case 0x1e
                void*** eax_12 = sub_745f3f(0x80)
                
                if (eax_12 == 0)
                    goto label_42874d
                
                int80_t st0_11
                st0_11, result_1 = sub_423c97(eax_12, arg1)
                goto label_428749
            case 0x1f
                void*** eax_13 = sub_745f3f(0x80)
                
                if (eax_13 == 0)
                    goto label_42874d
                
                int80_t st0_12
                st0_12, result_1 = sub_423fd1(eax_13, arg1)
                goto label_428749
            case 0x20
                void*** eax_14 = sub_745f3f(0x80)
                
                if (eax_14 == 0)
                    goto label_42874d
                
                int80_t st0_13
                st0_13, result_1 = sub_423ff2(eax_14, arg1)
                goto label_428749
            case 0x21
                void*** eax_15 = sub_745f3f(0x80)
                
                if (eax_15 == 0)
                    goto label_42874d
                
                int80_t st0_14
                st0_14, result_1 = sub_424013(eax_15, arg1)
                goto label_428749
            case 0x22
                void*** eax_16 = sub_745f3f(0x80)
                
                if (eax_16 == 0)
                    goto label_42874d
                
                int80_t st0_15
                st0_15, result_1 = sub_424034(eax_16, arg1)
                goto label_428749
            case 0x23
                void*** eax_17 = sub_745f3f(0x80)
                
                if (eax_17 == 0)
                    goto label_42874d
                
                int80_t st0_16
                st0_16, result_1 = sub_424055(eax_17, arg1)
                goto label_428749
            case 0x24
                void*** eax_18 = sub_745f3f(0x80)
                
                if (eax_18 == 0)
                    goto label_42874d
                
                int80_t st0_17
                st0_17, result_1 = sub_424076(eax_18, arg1)
                goto label_428749
            case 0x28
                void*** eax_19 = sub_745f3f(0x80)
                
                if (eax_19 == 0)
                    goto label_42874d
                
                int80_t st0_18
                st0_18, result_1 = sub_424097(eax_19, arg1)
                goto label_428749
            case 0x29
                void*** eax_20 = sub_745f3f(0x80)
                
                if (eax_20 == 0)
                    goto label_42874d
                
                int80_t st0_19
                st0_19, result_1 = sub_424464(eax_20, arg1)
                goto label_428749
else
    switch (eax)
        case 0x33
            void*** eax_29 = sub_745f3f(0x80)
            
            if (eax_29 == 0)
                goto label_42874d
            
            int80_t st0_24
            st0_24, result_1 = sub_4244a6(eax_29, arg1)
            goto label_428749
        case 0x34
            void*** eax_28 = sub_745f3f(0x80)
            
            if (eax_28 == 0)
                goto label_42874d
            
            int80_t st0_23
            st0_23, result_1 = sub_4244c7(eax_28, arg1)
            goto label_428749
        case 0x3c
            void*** eax_27 = sub_745f3f(0x80)
            
            if (eax_27 == 0)
                goto label_42874d
            
            int80_t st0_22
            st0_22, result_1 = sub_424509(eax_27, arg1)
            goto label_428749
        case 0x3d
            void*** eax_26 = sub_745f3f(0x80)
            
            if (eax_26 == 0)
                goto label_42874d
            
            int80_t st0_21
            st0_21, result_1 = sub_42452a(eax_26, arg1)
            goto label_428749
        case 0x3e
            void*** eax_30 = sub_745f3f(0x80)
            
            if (eax_30 == 0)
                goto label_42874d
            
            int80_t st0_25
            st0_25, result_1 = sub_42454b(eax_30, arg1)
            goto label_428749
        case 0x3f
            void*** eax_38 = sub_745f3f(0x80)
            
            if (eax_38 == 0)
                goto label_42874d
            
            int80_t st0_29
            st0_29, result_1 = sub_4247e3(eax_38, arg1)
            goto label_428749
        case 0x40
            void*** eax_37 = sub_745f3f(0x80)
            
            if (eax_37 == 0)
                goto label_42874d
            
            int80_t st0_28
            st0_28, result_1 = sub_424804(eax_37, arg1)
            goto label_428749
        case 0x43
            void*** eax_36 = sub_745f3f(0x80)
            
            if (eax_36 == 0)
                goto label_42874d
            
            int80_t st0_27
            st0_27, result_1 = sub_424825(eax_36, arg1)
            goto label_428749
        case 0x46
            void*** eax_35 = sub_745f3f(0x80)
            
            if (eax_35 == 0)
                goto label_42874d
            
            int80_t st0_26
            st0_26, result_1 = sub_4244e8(eax_35, arg1)
            goto label_428749
        case 0x51
            void*** eax_39 = sub_745f3f(0x80)
            
            if (eax_39 == 0)
                goto label_42874d
            
            int80_t st0_30
            st0_30, result_1 = sub_4244e8(eax_39, arg1)
            goto label_428749
        case 0x52
            void*** eax_47 = sub_745f3f(0x80)
            
            if (eax_47 == 0)
                goto label_42874d
            
            int80_t st0_34
            st0_34, result_1 = sub_424cc5(eax_47, arg1)
            goto label_428749
        case 0x6e
            void*** eax_46 = sub_745f3f(0x80)
            
            if (eax_46 == 0)
                goto label_42874d
            
            int80_t st0_33
            st0_33, result_1 = sub_424846(eax_46, arg1)
            goto label_428749
        case 0x6f
            void*** eax_45 = sub_745f3f(0x80)
            
            if (eax_45 == 0)
                goto label_42874d
            
            int80_t st0_32
            st0_32, result_1 = sub_424c62(eax_45, arg1)
            goto label_428749
        case 0x70
            void*** eax_44 = sub_745f3f(0x80)
            
            if (eax_44 == 0)
                goto label_42874d
            
            int80_t st0_31
            st0_31, result_1 = sub_424c83(eax_44, arg1)
            goto label_428749
        case 0x71
            void*** eax_48 = sub_745f3f(0x80)
            
            if (eax_48 == 0)
                goto label_42874d
            
            int80_t st0_35
            st0_35, result_1 = sub_424ca4(eax_48, arg1)
            goto label_428749
        case 0x72
            void*** eax_56 = sub_745f3f(0x80)
            
            if (eax_56 == 0)
                goto label_42874d
            
            int80_t st0_39
            st0_39, result_1 = sub_424cc5(eax_56, arg1)
            goto label_428749
        case 0x73
            void*** eax_55 = sub_745f3f(0x80)
            
            if (eax_55 == 0)
                goto label_42874d
            
            int80_t st0_38
            st0_38, result_1 = sub_424ce6(eax_55, arg1)
            goto label_428749
        case 0x74
            void*** eax_54 = sub_745f3f(0x80)
            
            if (eax_54 == 0)
                goto label_42874d
            
            int80_t st0_37
            st0_37, result_1 = sub_424d07(eax_54, arg1)
            goto label_428749
        case 0x75
            void*** eax_53 = sub_745f3f(0x80)
            
            if (eax_53 == 0)
                goto label_42874d
            
            int80_t st0_36
            st0_36, result_1 = sub_424867(eax_53, arg1)
            goto label_428749
return nullptr
