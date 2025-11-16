// 函数: sub_564b00
// 地址: 0x564b00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

LPARAM var_80
int32_t eax_1 = __security_cookie ^ &var_80
var_80 = arg4

if (arg2 == 0x110)
    sub_564510(arg1)
    sub_5f02dd(eax_1 ^ &var_80)
    return 0

if (arg2 == 5)
    LPARAM eax_9 = var_80
    uint32_t esi_1 = zx.d(eax_9.w)
    uint32_t edi_1 = arg4 u>> 0x10
    int32_t* eax_16 = sub_4c0f50(
        sub_4c0f50(
            sub_4c0f50(
                sub_4c0f50(
                    sub_4c0f50(
                        sub_4c0f50(sub_4c0f50(eax_9, edi_1, esi_1, 0x20ca9f8), edi_1, esi_1, 
                            0x20cb634), 
                        edi_1, esi_1, 0x20cc274), 
                    edi_1, esi_1, 0x20cc2ac), 
                edi_1, esi_1, 0x20cc2e4), 
            edi_1, esi_1, 0x20cc31c), 
        edi_1, esi_1, 0x20cc354)
    int32_t* eax_23 = sub_4c0f50(
        sub_4c0f50(
            sub_4c0f50(
                sub_4c0f50(
                    sub_4c0f50(
                        sub_4c0f50(sub_4c0f50(eax_16, edi_1, esi_1, 0x20cc38c), edi_1, esi_1, 
                            0x20cc3c4), 
                        edi_1, esi_1, 0x20cc3fc), 
                    edi_1, esi_1, 0x20cc434), 
                edi_1, esi_1, 0x20cc46c), 
            edi_1, esi_1, 0x20cc4a4), 
        edi_1, esi_1, 0x20cc4dc)
    int32_t* eax_30 = sub_4c0f50(
        sub_4c0f50(
            sub_4c0f50(
                sub_4c0f50(
                    sub_4c0f50(
                        sub_4c0f50(sub_4c0f50(eax_23, edi_1, esi_1, 0x20cc514), edi_1, esi_1, 
                            0x20cc54c), 
                        edi_1, esi_1, 0x20cc584), 
                    edi_1, esi_1, 0x20cc5bc), 
                edi_1, esi_1, 0x20cc5f4), 
            edi_1, esi_1, 0x20cc62c), 
        edi_1, esi_1, 0x20cc664)
    int32_t* eax_37 = sub_4c0f50(
        sub_4c0f50(
            sub_4c0f50(
                sub_4c0f50(
                    sub_4c0f50(
                        sub_4c0f50(sub_4c0f50(eax_30, edi_1, esi_1, 0x20cc69c), edi_1, esi_1, 
                            0x20cc6d4), 
                        edi_1, esi_1, 0x20cc70c), 
                    edi_1, esi_1, 0x20cc744), 
                edi_1, esi_1, 0x20cc77c), 
            edi_1, esi_1, 0x20cc7b4), 
        edi_1, esi_1, 0x20cc7ec)
    sub_4c0f50(sub_4c0f50(sub_4c0f50(eax_37, edi_1, esi_1, 0x20cc824), edi_1, esi_1, 0x20cc85c), 
        edi_1, esi_1, 0x20cc894)
    sub_5636d0()
    data_20cc930 = 1
    sub_5f02dd(eax_1 ^ &var_80)
    return 0

if (arg2 == 0xf)
    HWND hWnd = data_1af0a78
    
    if (hWnd != arg1)
        DefWindowProcA(arg1, 0xf, arg3, arg4)
        sub_5f02dd(eax_1 ^ &var_80)
        return 0
    
    PAINTSTRUCT paint
    BeginPaint(hWnd, &paint)
    EndPaint(data_1af0a78, &paint)
    sub_563b20(1)
    sub_5f02dd(eax_1 ^ &var_80)
    return 0

if (arg2 == 0x10)
    if (data_1af0a78 != arg2 - 0x10)
        sub_564ad0()
        sub_559ef0(0x1a, 0)
        EndDialog(data_1af0a78, 0)
        data_1af0a78 = 0
    
    sub_5f02dd(eax_1 ^ &var_80)
    return 1

if (arg2 == 0x214)
    sub_55a660(arg2 - 0x214, arg3, data_1af0a78, arg4)
else
    int32_t edx
    
    if (arg2 == 0x216)
        sub_55a620(arg2 - 0x216, edx, data_1af0a78, arg4)

RECT var_7c
int32_t var_6c
int32_t var_68
int32_t right_4
int32_t eax_77

if (arg2 == 0x115)
    if (arg4 == GetDlgItem(data_1af0a78, 0x502c))
        var_80 = data_20cc92c
        var_7c.top = 0x17
        SendMessageA(arg4, 0xea, 0, &var_7c)
        uint32_t eax_82 = zx.d(arg3.w)
        
        if (eax_82 u<= 7)
            int32_t bottom_1 = var_7c.bottom
            int32_t right_1 = var_7c.right
            int32_t right_3
            
            switch (eax_82)
                case 0
                    if (var_68 s> right_1)
                        right_3 = var_68 - 1
                        goto label_56541f
                case 1
                    if (var_68 s< bottom_1 - var_6c + 1)
                        right_3 = var_68 + 1
                        goto label_56541f
                case 2
                    if (var_68 s> right_1)
                        right_3 = var_68 - var_80
                        goto label_56541f
                case 3
                    if (var_68 s< bottom_1 - var_6c + 1)
                        right_3 = var_68 + var_80
                        goto label_56541f
                case 4, 5
                    right_3 = right_4
                label_56541f:
                    
                    if (right_3 s>= right_1)
                        goto label_56542f
                    
                    right_3 = right_1
                label_56542f:
                    
                    if (right_3 s> bottom_1 - var_6c + 1)
                        right_3 = bottom_1 - var_6c + 1
                    
                    SendMessageA(arg4, 0xe0, right_3, 1)
                    data_20cc8d8 = right_3
                label_565445:
                    eax_77 = data_20ca9f4
                    
                    if (eax_77 s>= 0x3e8)
                        goto label_56532e
                case 6
                    right_3 = var_7c.right
                    
                    if (var_68 s> right_3)
                        goto label_56542f
                case 7
                    right_3 = bottom_1 - var_6c + 1
                    
                    if (var_68 s< right_3)
                        goto label_56541f
else if (arg2 == 0x111)
    uint32_t eax_58 = zx.d(arg3.w)
    
    if (eax_58 s<= 0x5034)
        if (eax_58 == 0x5034)
            RECT rect
            GetWindowRect(data_1af0a78, &rect)
            GetWindowRect(GetDlgItem(data_1af0a78, 0x4eee), &var_7c)
            int32_t top = rect.top
            int32_t left = rect.left
            MoveWindow(data_1af0a78, left, top, 
                var_7c.left + 2 + data_70300c - var_7c.right - left + rect.right, 
                var_7c.top + 2 + data_7030dc - var_7c.bottom - top + rect.bottom, 1)
        label_565322:
            eax_77 = data_20ca9f4
            
            if (eax_77 s< 0x3e8)
                goto label_56533b
            
        label_56532e:
            *((eax_77 << 2) + &data_20cb9a0) = 1
        label_56533b:
            sub_563b20(0)
            sub_5f02dd(eax_1 ^ &var_80)
            return 0
        
        if (eax_58 - 0x4ef1 u<= 0x98)
            switch (eax_58)
                case 0x4ef1
                    data_131851c = 0
                label_565000:
                    sub_563b20(1)
                    sub_5f02dd(eax_1 ^ &var_80)
                    return 0
                case 0x4ef2
                    data_131851c = 1
                    goto label_565000
                case 0x4ef3
                    data_131851c = 2
                    goto label_565000
                case 0x4f6e
                    data_1318518 = 0
                    data_20ca9f4 = 0
                label_564fd5:
                    EnableWindow(GetDlgItem(data_1af0a78, 0x4ef1), 0)
                    EnableWindow(GetDlgItem(data_1af0a78, 0x4ef2), 0)
                    EnableWindow(GetDlgItem(data_1af0a78, 0x4ef3), 0)
                    goto label_565000
                case 0x4f6f
                    data_1318518 = 4
                    data_20ca9f4 = 0x3e8
                label_565076:
                    sub_5636d0()
                    EnableWindow(GetDlgItem(data_1af0a78, 0x4ef1), 1)
                    EnableWindow(GetDlgItem(data_1af0a78, 0x4ef2), 1)
                    EnableWindow(GetDlgItem(data_1af0a78, 0x4ef3), 1)
                    goto label_565000
                case 0x4f70
                    data_1318518 = 5
                    data_20ca9f4 = 0x3e9
                    goto label_565076
                case 0x4f71
                    data_1318518 = 6
                    data_20ca9f4 = 0x3ea
                    goto label_565076
                case 0x4f72
                    data_1318518 = 7
                    data_20ca9f4 = 0x3eb
                    goto label_565076
                case 0x4f73
                    data_1318518 = 1
                    data_20ca9f4 = 4
                    goto label_564fd5
                case 0x4f74
                    data_1318518 = 8
                    data_20ca9f4 = 0x3ec
                    goto label_565076
                case 0x4f75
                    data_1318518 = 9
                    data_20ca9f4 = 0x3ed
                    goto label_565076
                case 0x4f76
                    data_1318518 = 0xa
                    data_20ca9f4 = 0x3ee
                    goto label_565076
                case 0x4f77
                    data_1318518 = 0xb
                    data_20ca9f4 = 0x3ef
                    goto label_565076
                case 0x4f78
                    data_1318518 = 2
                    data_20ca9f4 = 8
                    goto label_564fd5
                case 0x4f79
                    data_1318518 = 0xc
                    data_20ca9f4 = 0x3f0
                    goto label_565076
                case 0x4f7a
                    data_1318518 = 0xd
                    data_20ca9f4 = 0x3f1
                    goto label_565076
                case 0x4f7b
                    data_1318518 = 0xe
                    data_20ca9f4 = 0x3f2
                    goto label_565076
                case 0x4f7c
                    data_1318518 = 0xf
                    data_20ca9f4 = 0x3f3
                    goto label_565076
                case 0x4f7d
                    data_1318518 = 3
                    data_20ca9f4 = 0xc
                    goto label_564fd5
                case 0x4f7e
                    data_1318518 = 0x10
                    data_20ca9f4 = 0x3f4
                    goto label_565076
                case 0x4f7f
                    data_1318518 = 0x11
                    data_20ca9f4 = 0x3f5
                    goto label_565076
                case 0x4f80
                    data_1318518 = 0x12
                    data_20ca9f4 = 0x3f6
                    goto label_565076
                case 0x4f81
                    data_1318518 = 0x13
                    data_20ca9f4 = 0x3f7
                    goto label_565076
                case 0x4f86
                    goto label_565322
                case 0x4f87
                    data_1318520 = 0
                    sub_5f02dd(eax_1 ^ &var_80)
                    return 0
                case 0x4f88
                    data_1318520 = 1
                    sub_5f02dd(eax_1 ^ &var_80)
                    return 0
                case 0x4f89
                    data_1318520 = 2
                    sub_5f02dd(eax_1 ^ &var_80)
                    return 0
else if (arg2 == 0x114 && arg4 == GetDlgItem(data_1af0a78, 0x4f25))
    var_80 = data_20cc928
    var_7c.top = 0x17
    SendMessageA(arg4, 0xea, 0, &var_7c)
    uint32_t eax_47 = zx.d(arg3.w)
    
    if (eax_47 u<= 7)
        int32_t bottom = var_7c.bottom
        int32_t right = var_7c.right
        int32_t right_2
        
        switch (eax_47)
            case 0
                if (var_68 s> right)
                    right_2 = var_68 - 1
                    goto label_564f45
            case 1
                if (var_68 s< bottom - var_6c + 1)
                    right_2 = var_68 + 1
                    goto label_564f45
            case 2
                if (var_68 s> right)
                    right_2 = var_68 - var_80
                    goto label_564f45
            case 3
                if (var_68 s< bottom - var_6c + 1)
                    right_2 = var_68 + var_80
                    goto label_564f45
            case 4, 5
                right_2 = right_4
            label_564f45:
                
                if (right_2 s>= right)
                    goto label_564f55
                
                right_2 = right
            label_564f55:
                
                if (right_2 s> bottom - var_6c + 1)
                    right_2 = bottom - var_6c + 1
                
                SendMessageA(arg4, 0xe0, right_2, 1)
                data_20cc8d4 = right_2
                goto label_565445
            case 6
                right_2 = var_7c.right
                
                if (var_68 s> right_2)
                    goto label_564f55
            case 7
                right_2 = bottom - var_6c + 1
                
                if (var_68 s< right_2)
                    goto label_564f45
sub_5f02dd(eax_1 ^ &var_80)
return 0
