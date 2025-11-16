// 函数: sub_554c70
// 地址: 0x554c70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 u<= 0x4e)
    if (arg2 != 0x4e)
        if (arg2 == 5)
            LPARAM lParam = arg4
            uint32_t edi_1 = lParam u>> 0x10
            uint32_t esi_1 = zx.d(lParam.w)
            sub_4c0f50(
                sub_4c0f50(
                    sub_4c0f50(
                        sub_4c0f50(sub_4c0f50(arg2 - 5, edi_1, esi_1, 0x20c2b84), edi_1, esi_1, 
                            0x20c2bbc), 
                        edi_1, esi_1, 0x20c2bf4), 
                    edi_1, esi_1, 0x20c2c2c), 
                edi_1, esi_1, 0x20c2c64)
            SendDlgItemMessageA(data_20c2b5c, 0xc350, 5, arg3, lParam)
            return 1
        
        if (arg2 == 0xf)
            PostMessageA(GetDlgItem(data_20c2b5c, 0x4f34), 0xf, 0, 0)
            PostMessageA(GetDlgItem(data_20c2b5c, 0x4ef6), 0xf, 0, 0)
            return 0
        
        if (arg2 != 0x10)
            return 0
        
        goto label_554c9d
    
    int32_t eax_13 = arg4[2]
    
    if (eax_13 == 0xffffff9b)
        if (arg3.w == 0x4f34 && (arg4[5].b & 2) != 0)
            BOOL eax_25 = sub_5515b0(1)
            WPARAM esi_4 = arg4[3]
            sub_4c1570(eax_25, data_20c2b5c, esi_4, 0x4f34, 0)
            data_20c2b7c = esi_4
            ShowWindow(GetDlgItem(data_20c2b5c, 0x4ef6), SW_HIDE)
            ShowWindow(GetDlgItem(data_20c2b5c, 0x4fbc), SW_HIDE)
    else if (arg3 == 0x4f34 && eax_13 == 0xfffffffe && data_20c2b7c != 0xffffffff)
        int32_t X
        int32_t* var_2c_2 = &X
        int32_t* var_34
        
        if (sub_4c1880(var_34) != 0)
            int32_t* esi_3 = data_20c2ca4 + (data_20c2b7c << 3)
            int32_t eax_16 = *esi_3
            
            if (eax_16 == 0xc || eax_16 == 0x12 || eax_16 == 0xffffff9d || eax_16 == 0xffffff9e
                || *((eax_16 << 2) + &data_610fb0) != 3)
            label_554e1e:
                HWND eax_17 = GetDlgItem(data_20c2b5c, 0x4ef6)
                HWND hWnd = GetDlgItem(data_20c2b5c, 0x4fbc)
                int32_t Y
                int32_t nWidth
                int32_t var_c
                MoveWindow(eax_17, X, Y, nWidth, var_c + 4, 1)
                ShowWindow(eax_17, SW_SHOW)
                int32_t eax_20 = *esi_3
                
                if (eax_20 == 0xc || eax_20 == 0x12 || eax_20 == 0xffffff9d)
                    SendMessageA(hWnd, 0x469, 0, 0)
                else if (eax_20 != 0xffffff9e)
                    SendMessageA(hWnd, 0x469, eax_17, 0)
                    ShowWindow(hWnd, SW_SHOW)
                    int32_t eax_21 = *esi_3
                    
                    if (eax_21 s< 0x1a)
                        SendMessageA(GetDlgItem(data_20c2b5c, 0x4fbc), 0x465, 0, 0xfc1803e8)
                    else if (eax_21 s< 0x34)
                        SendMessageA(GetDlgItem(data_20c2b5c, 0x4fbc), 0x465, 0, 1)
                    else if (eax_21 s< 0x4e)
                        SendMessageA(GetDlgItem(data_20c2b5c, 0x4fbc), 0x465, 0, 3)
                    else if (eax_21 s< 0x68)
                        SendMessageA(GetDlgItem(data_20c2b5c, 0x4fbc), 0x465, 0, 0xf)
                    else if (eax_21 s< 0x82)
                        SendMessageA(GetDlgItem(data_20c2b5c, 0x4fbc), 0x465, 0, 0xff)
                else
                    SendMessageA(hWnd, 0x469, 0, 0)
                
                SetFocus(eax_17)
                int32_t ecx_8 = *esi_3
                int32_t edx_5 = esi_3[1]
                data_20c2b80 = 1
                PSTR lpString
                
                if (ecx_8 == 0xc)
                    PSTR lpString_1 = sub_550660(ecx_8, edx_5)
                    
                    lpString = lpString_1 == 0 ? nullptr : lpString_1
                else if (ecx_8 == 0x12)
                    PSTR lpString_2 = sub_550660(ecx_8, edx_5)
                    
                    lpString = lpString_2 == 0 ? nullptr : lpString_2
                else if (ecx_8 != 0xffffff9d)
                    if (ecx_8 != 0xffffff9e)
                        uint32_t uValue = sub_5507a0(ecx_8, edx_5)
                        SetDlgItemInt(data_20c2b5c, 0x4ef6, uValue, 1)
                        return 1
                    
                    PSTR lpString_4 = sub_550660(ecx_8, edx_5)
                    
                    lpString = lpString_4 == 0 ? nullptr : lpString_4
                else
                    PSTR lpString_3 = sub_550660(ecx_8, edx_5)
                    
                    lpString = lpString_3 == 0 ? nullptr : lpString_3
                
                SetDlgItemTextA(data_20c2b5c, 0x4ef6, lpString)
                return 1
            
            int32_t ecx_7 = esi_3[1]
            
            if (ecx_7 s>= 0 && ecx_7 s< (&data_63ecb0)[eax_16])
                goto label_554e1e
    
    return 1

if (arg2 == 0x110)
    data_20c2b5c = arg1
    sub_552df0()
    return 1

if (arg2 != 0x111)
    if (arg2 != 0x214)
        return 0
    
    int32_t eax_32 = GetSystemMetrics(SM_CYMAXTRACK)
    int32_t eax_33 = GetSystemMetrics(SM_CXMAXTRACK)
    int32_t eax_37 = data_20c2b68 - data_20c2b60
    sub_4c0c40(eax_37, arg4, arg3, eax_37, data_20c2b6c - data_20c2b64, eax_33, eax_32)
    return 1

if (zx.d(arg3.w) - 0x4f32 u> 0xe7)
    return 1

switch (arg3.w)
    case 0x4f32
        if (arg3 u>> 0x10 == 1)
            LRESULT eax_44 = SendMessageA(GetDlgItem(data_20c2b5c, 0x4f32), 0x188, 0, 0)
            
            if (eax_44 != 0xffffffff)
                sub_5515b0(0)
                sub_551880(eax_44)
                sub_5522f0(0)
        
        return 1
    case 0x4f33
        if (arg3 u>> 0x10 == 1)
            LRESULT eax_47 = SendMessageA(GetDlgItem(data_20c2b5c, 0x4f33), 0x188, 0, 0)
            
            if (eax_47 != 0xffffffff)
                sub_5515b0(0)
                sub_5522f0(eax_47)
        
        return 1
    case 0x4f34, 0x4f35, 0x4f36, 0x4f37, 0x4f38, 0x4f39, 0x4f3a, 0x4f3b, 0x4f3c, 0x4f3d, 0x4f3e, 
            0x4f3f, 0x4f40, 0x4f41, 0x4f42, 0x4f43, 0x4f44, 0x4f45, 0x4f46, 0x4f47, 0x4f48, 0x4f49, 
            0x4f4a, 0x4f4b, 0x4f4c, 0x4f4d, 0x4f4e, 0x4f50, 0x4f51, 0x4f52, 0x4f53, 0x4f54, 0x4f55, 
            0x4f56, 0x4f57, 0x4f58, 0x4f59, 0x4f5a, 0x4f5b, 0x4f5c, 0x4f5d, 0x4f5e, 0x4f5f, 0x4f60, 
            0x4f61, 0x4f62, 0x4f63, 0x4f64, 0x4f65, 0x4f66, 0x4f67, 0x4f68, 0x4f69, 0x4f6a, 0x4f6b, 
            0x4f6c, 0x4f6d, 0x4f6e, 0x4f6f, 0x4f70, 0x4f71, 0x4f72, 0x4f73, 0x4f74, 0x4f75, 0x4f76, 
            0x4f77, 0x4f78, 0x4f79, 0x4f7a, 0x4f7b, 0x4f7c, 0x4f7d, 0x4f7e, 0x4f7f, 0x4f80, 0x4f81, 
            0x4f82, 0x4f83, 0x4f84, 0x4f85, 0x4f86, 0x4f87, 0x4f88, 0x4f89, 0x4f8a, 0x4f8b, 0x4f8c, 
            0x4f8d, 0x4f8e, 0x4f8f, 0x4f90, 0x4f91, 0x4f92, 0x4f93, 0x4f94, 0x4f95, 0x4f96, 0x4f97, 
            0x4f98, 0x4f99, 0x4f9a, 0x4f9b, 0x4f9c, 0x4f9d, 0x4f9e, 0x4f9f, 0x4fa0, 0x4fa1, 0x4fa2, 
            0x4fa3, 0x4fa4, 0x4fa5, 0x4fa6, 0x4fa7, 0x4fa8, 0x4fa9, 0x4faa, 0x4fab, 0x4fac, 0x4fad, 
            0x4fae, 0x4faf, 0x4fb0, 0x4fb1, 0x4fb2, 0x4fb3, 0x4fb4, 0x4fb5, 0x4fb6, 0x4fb7, 0x4fb8, 
            0x4fb9, 0x4fba, 0x4fbb, 0x4fbc, 0x4fbd, 0x4fbe, 0x4fbf, 0x4fc0, 0x4fc1, 0x4fc2, 0x4fc3, 
            0x4fc4, 0x4fc5, 0x4fc6, 0x4fc7, 0x4fc8, 0x4fc9, 0x4fca, 0x4fcb, 0x4fcc, 0x4fcd, 0x4fce, 
            0x4fcf, 0x4fd0, 0x4fd1, 0x4fd2, 0x4fd3, 0x4fd4, 0x4fd5, 0x4fd6, 0x4fd7, 0x4fd8, 0x4fd9, 
            0x4fda, 0x4fdb, 0x4fdc, 0x4fdd, 0x4fde, 0x4fdf, 0x4fe0, 0x4fe1, 0x4fe2, 0x4fe3, 0x4fe4, 
            0x4fe5, 0x4fe6, 0x4fe7, 0x4fe8, 0x4fe9, 0x4fea, 0x4feb, 0x4fec, 0x4fed, 0x4fee, 0x4fef, 
            0x4ff0, 0x4ff1, 0x4ff2, 0x4ff3, 0x4ff4, 0x4ff5, 0x4ff6, 0x4ff7, 0x4ff8, 0x4ff9, 0x4ffa, 
            0x4ffb, 0x4ffc, 0x4ffd, 0x4ffe, 0x4fff, 0x5000, 0x5001, 0x5002, 0x5003, 0x5004, 0x5005, 
            0x5006, 0x5007, 0x5008, 0x5009, 0x500a, 0x500b, 0x500c, 0x500d, 0x500e, 0x500f, 0x5010, 
            0x5011, 0x5012, 0x5013, 0x5014, 0x5015, 0x5016, 0x5017, 0x5018
        return 1
    case 0x4f4f
    label_554c9d:
        sub_5515b0(0)
        sub_5534e0()
        return 1
    case 0x5019
        sub_551570()
        sub_5528f0()
        sub_551880(data_20c2b74)
        sub_5522f0(data_20c2b78)
        return 1
