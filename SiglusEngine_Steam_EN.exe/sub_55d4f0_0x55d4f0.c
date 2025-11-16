// 函数: sub_55d4f0
// 地址: 0x55d4f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_410
int32_t eax_1 = __security_cookie ^ &var_410
int32_t nIDDlgItem
void* lpString

if (arg2 u> 0x111)
    if (arg2 == 0x114)
        if (arg4 != GetDlgItem(data_1af0a80, 0x4e5b))
            sub_5f02dd(eax_1 ^ &var_410)
            return 0
        
        LRESULT eax_36 = SendMessageA(GetDlgItem(data_1af0a80, 0x4e5b), 0x400, 0, 0)
        data_1319058 = eax_36
        LRESULT var_41c_9 = eax_36
    label_55d969:
        sub_4c84d0(&var_410, "%d")
        lpString = &var_410
        nIDDlgItem = 0x4e5c
    label_55d981:
        SetDlgItemTextA(data_1af0a80, nIDDlgItem, lpString)
        sub_5f02dd(eax_1 ^ &var_410)
        return 0
    
    int32_t var_428
    
    if (arg2 == 0x214)
        int32_t esi_2 = data_1af0a80
        int32_t eax_32
        int32_t edx_6
        eax_32, edx_6 = sub_4d7c70(sub_55a590(esi_2), esi_2, &data_20c3980, arg3, arg4)
        int32_t var_41c_8 = arg4
        int32_t var_420_4 = arg3
        int32_t var_424
        sub_4d7940(eax_32, edx_6, 0x20c399c, var_428, var_424)
        sub_5f02dd(eax_1 ^ &var_410)
        return 0
    
    if (arg2 != 0x216)
        sub_5f02dd(eax_1 ^ &var_410)
        return 0
    
    int32_t esi_1 = data_1af0a80
    int32_t eax_28
    int32_t ecx_29
    eax_28, ecx_29 = sub_55a590(esi_1)
    int32_t var_41c_5 = arg4
    int32_t eax_29
    int32_t edx_4
    eax_29, edx_4 = sub_4d7bd0(eax_28, esi_1, &data_20c3980, ecx_29)
    int32_t var_41c_6 = arg4
    sub_4d7740(eax_29, edx_4, 0x20c399c, var_428)
    sub_5f02dd(eax_1 ^ &var_410)
    return 0

if (arg2 != 0x111)
    if (arg2 == 5)
        uint32_t esi = zx.d(arg4.w)
        uint32_t edi_1 = arg4 u>> 0x10
        sub_4c0f50(sub_4c0f50(sub_4c0f50(arg4, edi_1, esi, 0x20c3e38), edi_1, esi, 0x20c4674), 
            edi_1, esi, 0x20c47b4)
        sub_5f02dd(eax_1 ^ &var_410)
        return 0
    
    if (arg2 != 0x10)
        if (arg2 == 0x110)
            sub_55d210(arg1)
            sub_5f02dd(eax_1 ^ &var_410)
            return 0
        
        sub_5f02dd(eax_1 ^ &var_410)
        return 0
    
    if (data_1af0a80 != 0)
        sub_55ca60()
        SetWindowLongA(GetDlgItem(data_1af0a7c, 0x4e60), 0xfffffffc, data_20c54b4)
        sub_559ef0(0x1c, 0)
        EndDialog(data_1af0a80, 0)
        data_1af0a80 = 0
    
    sub_5f02dd(eax_1 ^ &var_410)
    return 1

if (zx.d(arg3.w) - 0x4e55 u> 0xe4)
    sub_5f02dd(eax_1 ^ &var_410)
    return 0

switch (zx.d(arg3.w) + &jump_table_558b64[3]:3)
    case &lookup_table_55d9c8
        if (arg3 u>> 0x10 != 0x300)
            sub_5f02dd(eax_1 ^ &var_410)
            return 0
        
        GetDlgItemTextA(data_1af0a80, 0x4e55, &data_1318e48, 0x208)
        
        if (sub_4cfc80(&data_1318e48) != 0x208)
            sub_5f02dd(eax_1 ^ &var_410)
            return 0
        
        lpString = &data_1318e48
        nIDDlgItem = 0x4e55
        goto label_55d981
    case &lookup_table_55d9c8[1], &lookup_table_55d9c8[3], &lookup_table_55d9c8[4], 
            &lookup_table_55d9c8[6], &lookup_table_55d9c8[7], &lookup_table_55d9c8[9], 
            &lookup_table_55d9c8[0xd], &lookup_table_55d9c8[0xf], &lookup_table_55d9c8[0x10], 
            &lookup_table_55d9c8[0x11], &lookup_table_55d9c8[0x12], &lookup_table_55d9c8[0x13], 
            &lookup_table_55d9c8[0x14], &lookup_table_55d9c8[0x15], &lookup_table_55d9c8[0x16], 
            &lookup_table_55d9c8[0x17], &lookup_table_55d9c8[0x18], &lookup_table_55d9c8[0x19], 
            &lookup_table_55d9c8[0x1a], &lookup_table_55d9c8[0x1b], &lookup_table_55d9c8[0x1c], 
            &lookup_table_55d9c8[0x1d], &lookup_table_55d9c8[0x1e], &lookup_table_55d9c8[0x1f], 
            &lookup_table_55d9c8[0x20], &lookup_table_55d9c8[0x21], &lookup_table_55d9c8[0x22], 
            &lookup_table_55d9c8[0x23], &lookup_table_55d9c8[0x24], &lookup_table_55d9c8[0x25], 
            &lookup_table_55d9c8[0x26], &lookup_table_55d9c8[0x27], &lookup_table_55d9c8[0x28], 
            &lookup_table_55d9c8[0x29], &lookup_table_55d9c8[0x2a], &lookup_table_55d9c8[0x2b], 
            &lookup_table_55d9c8[0x2c], &lookup_table_55d9c8[0x2d], &lookup_table_55d9c8[0x2e], 
            &lookup_table_55d9c8[0x2f], &lookup_table_55d9c8[0x30], &lookup_table_55d9c8[0x31], 
            &lookup_table_55d9c8[0x32], &lookup_table_55d9c8[0x33], &lookup_table_55d9c8[0x34], 
            &lookup_table_55d9c8[0x35], &lookup_table_55d9c8[0x36], &lookup_table_55d9c8[0x37], 
            &lookup_table_55d9c8[0x38], &lookup_table_55d9c8[0x39], &lookup_table_55d9c8[0x3a], 
            &lookup_table_55d9c8[0x3b], &lookup_table_55d9c8[0x3c], &lookup_table_55d9c8[0x3d], 
            &lookup_table_55d9c8[0x3e], &lookup_table_55d9c8[0x3f], &lookup_table_55d9c8[0x40], 
            &lookup_table_55d9c8[0x41], &lookup_table_55d9c8[0x42], &lookup_table_55d9c8[0x43], 
            &lookup_table_55d9c8[0x44], &lookup_table_55d9c8[0x45], &lookup_table_55d9c8[0x46], 
            &lookup_table_55d9c8[0x47], &lookup_table_55d9c8[0x48], &lookup_table_55d9c8[0x49], 
            &lookup_table_55d9c8[0x4a], &lookup_table_55d9c8[0x4b], &lookup_table_55d9c8[0x4c], 
            &lookup_table_55d9c8[0x4d], &lookup_table_55d9c8[0x4e], &lookup_table_55d9c8[0x4f], 
            &lookup_table_55d9c8[0x50], &lookup_table_55d9c8[0x51], &lookup_table_55d9c8[0x52], 
            &lookup_table_55d9c8[0x53], &lookup_table_55d9c8[0x54], &lookup_table_55d9c8[0x55], 
            &lookup_table_55d9c8[0x56], &lookup_table_55d9c8[0x57], &lookup_table_55d9c8[0x58], 
            &lookup_table_55d9c8[0x59], &lookup_table_55d9c8[0x5a], &lookup_table_55d9c8[0x5b], 
            &lookup_table_55d9c8[0x5c], &lookup_table_55d9c8[0x5d], &lookup_table_55d9c8[0x5e], 
            &lookup_table_55d9c8[0x5f], &lookup_table_55d9c8[0x60], &lookup_table_55d9c8[0x61], 
            &lookup_table_55d9c8[0x62], &lookup_table_55d9c8[0x63], &lookup_table_55d9c8[0x64], 
            &lookup_table_55d9c8[0x65], &lookup_table_55d9c8[0x66], &lookup_table_55d9c8[0x67], 
            &lookup_table_55d9c8[0x68], &lookup_table_55d9c8[0x69], &lookup_table_55d9c8[0x6a], 
            &lookup_table_55d9c8[0x6b], &lookup_table_55d9c8[0x6c], &lookup_table_55d9c8[0x6d], 
            &lookup_table_55d9c8[0x6e], &lookup_table_55d9c8[0x6f], &lookup_table_55d9c8[0x70], 
            &lookup_table_55d9c8[0x71], &lookup_table_55d9c8[0x72], &lookup_table_55d9c8[0x73], 
            &lookup_table_55d9c8[0x74], &lookup_table_55d9c8[0x75], &lookup_table_55d9c8[0x76], 
            &lookup_table_55d9c8[0x77], &lookup_table_55d9c8[0x78], &lookup_table_55d9c8[0x79], 
            &lookup_table_55d9c8[0x7a], &lookup_table_55d9c8[0x7b], &lookup_table_55d9c8[0x7c], 
            &lookup_table_55d9c8[0x7d], &lookup_table_55d9c8[0x7e], &lookup_table_55d9c8[0x7f], 
            &lookup_table_55d9c8[0x80], &lookup_table_55d9c8[0x81], &lookup_table_55d9c8[0x82], 
            &lookup_table_55d9c8[0x83], &lookup_table_55d9c8[0x84], &lookup_table_55d9c8[0x85], 
            &lookup_table_55d9c8[0x86], &lookup_table_55d9c8[0x87], &lookup_table_55d9c8[0x88], 
            &lookup_table_55d9c8[0x89], &lookup_table_55d9c8[0x8a], &lookup_table_55d9c8[0x8b], 
            &lookup_table_55d9c8[0x8c], &lookup_table_55d9c8[0x8d], &lookup_table_55d9c8[0x8e], 
            &lookup_table_55d9c8[0x8f], &lookup_table_55d9c8[0x90], &lookup_table_55d9c8[0x91], 
            &lookup_table_55d9c8[0x92], &lookup_table_55d9c8[0x93], &lookup_table_55d9c8[0x94], 
            &lookup_table_55d9c8[0x95], &lookup_table_55d9c8[0x96], &lookup_table_55d9c8[0x97], 
            &lookup_table_55d9c8[0x98], &lookup_table_55d9c8[0x99], &lookup_table_55d9c8[0x9a], 
            &lookup_table_55d9c8[0x9b], &lookup_table_55d9c8[0x9c], &lookup_table_55d9c8[0x9d], 
            &lookup_table_55d9c8[0x9e], &lookup_table_55d9c8[0x9f], &lookup_table_55d9c8[0xa0], 
            &lookup_table_55d9c8[0xa1], &lookup_table_55d9c8[0xa2], &lookup_table_55d9c8[0xa3], 
            &lookup_table_55d9c8[0xa4], &lookup_table_55d9c8[0xa5], &lookup_table_55d9c8[0xa6], 
            &lookup_table_55d9c8[0xa7], &lookup_table_55d9c8[0xa8], &lookup_table_55d9c8[0xa9], 
            &lookup_table_55d9c8[0xaa], &lookup_table_55d9c8[0xab], &lookup_table_55d9c8[0xac], 
            &lookup_table_55d9c8[0xad], &lookup_table_55d9c8[0xae], &lookup_table_55d9c8[0xaf], 
            &lookup_table_55d9c8[0xb0], &lookup_table_55d9c8[0xb1], &lookup_table_55d9c8[0xb2], 
            &lookup_table_55d9c8[0xb3], &lookup_table_55d9c8[0xb4], &lookup_table_55d9c8[0xb5], 
            &lookup_table_55d9c8[0xb6], &lookup_table_55d9c8[0xb7], &lookup_table_55d9c8[0xb8], 
            &lookup_table_55d9c8[0xb9], &lookup_table_55d9c8[0xba], &lookup_table_55d9c8[0xbb], 
            &lookup_table_55d9c8[0xbc], &lookup_table_55d9c8[0xbd], &lookup_table_55d9c8[0xbe], 
            &lookup_table_55d9c8[0xbf], &lookup_table_55d9c8[0xc0], &lookup_table_55d9c8[0xc1], 
            &lookup_table_55d9c8[0xc2], &lookup_table_55d9c8[0xc3], &lookup_table_55d9c8[0xc4], 
            &lookup_table_55d9c8[0xc5], &lookup_table_55d9c8[0xc6], &lookup_table_55d9c8[0xc7], 
            &lookup_table_55d9c8[0xc8], &lookup_table_55d9c8[0xc9], &lookup_table_55d9c8[0xca], 
            &lookup_table_55d9c8[0xcb], &lookup_table_55d9c8[0xcc], &lookup_table_55d9c8[0xcd], 
            &lookup_table_55d9c8[0xce], &lookup_table_55d9c8[0xcf], &lookup_table_55d9c8[0xd0], 
            &lookup_table_55d9c8[0xd1], &lookup_table_55d9c8[0xd2], &lookup_table_55d9c8[0xd3], 
            &lookup_table_55d9c8[0xd4], &lookup_table_55d9c8[0xd5], &lookup_table_55d9c8[0xd6], 
            &lookup_table_55d9c8[0xd7], &lookup_table_55d9c8[0xd8], &lookup_table_55d9c8[0xd9], 
            &lookup_table_55d9c8[0xda], &lookup_table_55d9c8[0xdb], &lookup_table_55d9c8[0xdc], 
            &lookup_table_55d9c8[0xdd], &lookup_table_55d9c8[0xde], &lookup_table_55d9c8[0xdf], 
            &lookup_table_55d9c8[0xe0], &lookup_table_55d9c8[0xe1], &lookup_table_55d9c8[0xe2], 
            &lookup_table_55d9c8[0xe3]
        sub_5f02dd(eax_1 ^ &var_410)
        return 0
    case &lookup_table_55d9c8[2]
        if (arg3 u>> 0x10 != 0x300 || data_20c3e34 == 0)
            sub_5f02dd(eax_1 ^ &var_410)
            return 0
        
        data_1319054 = GetDlgItemInt(data_1af0a80, 0x4e57, nullptr, 0)
        sub_5f02dd(eax_1 ^ &var_410)
        return 0
    case &lookup_table_55d9c8[5]
        HWND hDlg = data_1af0a80
        data_1319058 = 4
        SendMessageA(GetDlgItem(hDlg, 0x4e5b), 0x405, 1, 4)
        int32_t var_41c_4 = data_1319058
        goto label_55d969
    case &lookup_table_55d9c8[8]
        data_131905c = sub_4c1080(data_1af0a80, 0x4e5d)
        sub_5f02dd(eax_1 ^ &var_410)
        return 0
    case &lookup_table_55d9c8[0xa]
        data_1319060 = sub_4c1080(data_1af0a80, 0x4e5f)
        sub_5f02dd(eax_1 ^ &var_410)
        return 0
    case &lookup_table_55d9c8[0xb]
        if (arg3 u>> 0x10 != 0x300)
            sub_5f02dd(eax_1 ^ &var_410)
            return 0
        
        GetDlgItemTextA(data_1af0a80, 0x4e60, &data_1318c40, 0x208)
        
        if (sub_4cfc80(&data_1318c40) != 0x208)
            sub_5f02dd(eax_1 ^ &var_410)
            return 0
        
        lpString = &data_1318c40
        nIDDlgItem = 0x4e60
        goto label_55d981
    case &lookup_table_55d9c8[0xc]
        if (arg3 u>> 0x10 != 0x300 || data_20c3e34 == 0)
            sub_5f02dd(eax_1 ^ &var_410)
            return 0
        
        uint32_t eax_15 = GetDlgItemInt(data_1af0a80, 0x4e61, nullptr, 0)
        data_1319050 = eax_15
        int32_t var_41c_2 = 0x752f - eax_15
        sub_4c84d0(&var_410, 0x621744)
        lpString = &var_410
        nIDDlgItem = 0x4e5f
        goto label_55d981
    case &lookup_table_55d9c8[0xe]
        SetFocus(data_7027bc)
        sub_55cfd0()
        sub_5f02dd(eax_1 ^ &var_410)
        return 0
    case &lookup_table_55d9c8[0xe4]
        MessageBoxA(data_1af0a80, 0x621788, 0x6215e0, MB_OK)
        sub_5f02dd(eax_1 ^ &var_410)
        return 0
