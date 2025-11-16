// 函数: sub_72b5d0
// 地址: 0x72b5d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

while (true)
    if (arg1[0x65] == 0)
        char eax_2
        
        if (*(arg1[0x6b] + 0xc) != 0)
            eax_2 = sub_72b400(arg1)
        else
            eax_2 = sub_72b520(arg1)
        
        if (eax_2 == 0)
            break
    
    int32_t ecx_2 = arg1[0x65]
    
    if (ecx_2 - 1 u> 0xfd)
    label_72b712:
        *(*arg1 + 0x14) = 0x46
    label_72b722:
        *(*arg1 + 0x18) = arg1[0x65]
        (**arg1)(arg1)
        arg1[0x65] = 0
    else
        uint32_t eax_4 = zx.d(*(ecx_2 + &jump_table_72b788[0x12]:3))
        char var_10_1
        char var_c_1
        char eax_7
        char edx
        
        switch (eax_4)
            case 0
                *(*arg1 + 0x14) = 0x5e
                *(*arg1 + 0x18) = arg1[0x65]
                (*(*arg1 + 4))(arg1, 1)
                arg1[0x65] = 0
                continue
                continue
            case 1
                edx = 1
            label_72b636:
                var_c_1 = 0
                var_10_1 = 0
                goto label_72b63c
            case 2
                edx = 0
                goto label_72b636
            case 3
                var_c_1 = 0
                var_10_1 = 1
                edx = 0
            label_72b63c:
                eax_7 = sub_729940(eax_4.b, edx, arg1, var_10_1, var_c_1)
            case 4
                *(*arg1 + 0x14) = 0x3f
                goto label_72b722
            case 5
                eax_7 = sub_72a170(arg1)
            case 6
                var_c_1 = 1
                edx = 0
                var_10_1 = 0
                goto label_72b63c
            case 7
                var_c_1 = 1
                var_10_1 = 1
                edx = 0
                goto label_72b63c
            case 8
                eax_7 = sub_729ff0(arg1)
            case 9
                if (sub_7298a0(arg1) == 0)
                    break
                
                arg1[0x65] = 0
                continue
                continue
            case 0xa
                *(*arg1 + 0x14) = 0x57
                (*(*arg1 + 4))(arg1, 1)
                arg1[0x65] = 0
                return 2
            case 0xb
                if (sub_729ca0(arg1) != 0)
                    arg1[0x65] = 0
                    return 1
                
                break
                break
            case 0xc
                eax_7 = sub_72a4e0(arg1)
            case 0xd
                eax_7 = sub_72b340(arg1)
            case 0xe
                eax_7 = sub_72a8a0(arg1)
            case 0xf
                eax_7 = (*(arg1[0x6b] + (ecx_2 << 2) - 0x364))(arg1)
            case 0x10
                eax_7 = sub_72a9b0(arg1)
            case 0x11
                eax_7 = (*(arg1[0x6b] + 0x18))(arg1)
            case 0x12
                goto label_72b712
        
        if (eax_7 == 0)
            break
        
        arg1[0x65] = 0

return 0
