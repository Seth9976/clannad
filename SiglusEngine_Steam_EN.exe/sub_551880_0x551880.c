// 函数: sub_551880
// 地址: 0x551880
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd = GetDlgItem(data_20c2b5c, 0x4f33)
LRESULT eax = SendMessageA(hWnd, 0x184, 0, 0)
data_20c2b70 = 0xffffffff

if (arg1 != 0xffffffff)
    data_20c2b74 = arg1
    
    switch (arg1)
        case 0
            data_20c2b70 = 0xfffffffe
            return eax
        case 1
            data_20c2b70 = 0xfffffffd
            return eax
        case 2
            data_20c2b70 = 0xfffffffc
            return eax
        case 3
            data_20c2b70 = 0xfffffffb
            return eax
        case 4
            data_20c2b70 = 0xfffffffa
            return eax
        case 5
            data_20c2b70 = 0xfffffff9
            return eax
        case 6
            data_20c2b70 = 0xfffffff8
            return eax
        case 7
            data_20c2b70 = 0xfffffff7
            return eax
        case 8
            data_20c2b70 = 0xfffffff6
            return eax
        case 9
            data_20c2b70 = 0xfffffff5
            return eax
        case 0xa
            data_20c2b70 = 0xfffffff4
            return eax
        case 0xb
            data_20c2b70 = 0xfffffff3
            return eax
        case 0xc
            data_20c2b70 = 0xfffffff2
            return eax
        case 0xd
            data_20c2b70 = 0xfffffff1
            return eax
        case 0xe
            data_20c2b70 = 0xfffffff0
            return eax
        case 0xf
            data_20c2b70 = 0xffffffef
            return eax
        case 0x10
            data_20c2b70 = 0xffffffee
            return eax
        case 0x11
            data_20c2b70 = 0xffffffed
            return eax
        case 0x12
            data_20c2b70 = 0xffffffec
            return eax
        case 0x13
            data_20c2b70 = 0xffffffeb
            return eax
    
    if (arg1 != 0x14)
        if (arg1 s<= 0x1c)
            char const (** const i)[0xe] = &data_6126c0
            data_20c2b70 = (&data_61244c)[arg1]
            int32_t eax_2 = data_1333e34
            
            do
                if (eax_2 != 0)
                    eax_2(hWnd, 0x180, 0, *i)
                    eax_2 = data_1333e34
                
                i = &i[1]
            while (i s< &data_6126c8)
            
            return eax_2
        
        if (arg1 != 0x1d)
            if (arg1 == 0x1e)
                int32_t eax_3 = data_1333e34
                char const (** const i_1)[0xe] = &data_6126c0
                data_20c2b70 = 0xc
                
                do
                    if (eax_3 != 0)
                        eax_3(hWnd, 0x180, 0, *i_1)
                        eax_3 = data_1333e34
                    
                    i_1 = &i_1[1]
                while (i_1 s< &data_6126c8)
                
                return eax_3
            
            if (arg1 == 0x1f)
                int32_t eax_4 = data_1333e34
                char const (** const i_2)[0xe] = &data_6126c0
                data_20c2b70 = 0x12
                
                do
                    if (eax_4 != 0)
                        eax_4(hWnd, 0x180, 0, *i_2)
                        eax_4 = data_1333e34
                    
                    i_2 = &i_2[1]
                while (i_2 s< &data_6126c8)
                
                return eax_4
            
            if (arg1 != 0x20)
                if (arg1 == 0x21)
                    data_20c2b70 = 0xffffff9d
                    return eax
                
                if (arg1 == 0x22)
                    data_20c2b70 = 0xffffff9e
                    return eax
                
                if (arg1 != 0x23)
                    if (arg1 s<= 0x2b)
                        char const (** const i_3)[0xe] = &data_6126c0
                        data_20c2b70 = *((arg1 << 2) + &data_612410) + 0x1a
                        int32_t eax_7 = data_1333e34
                        
                        do
                            if (eax_7 != 0)
                                eax_7(hWnd, 0x180, 0, *i_3)
                                eax_7 = data_1333e34
                            
                            i_3 = &i_3[1]
                        while (i_3 s< &data_6127c0)
                        
                        return eax_7
                    
                    if (arg1 != 0x2c)
                        if (arg1 s<= 0x34)
                            char const (** const i_4)[0xe] = &data_6126c0
                            data_20c2b70 = *((arg1 << 2) + &data_6123ec) + 0x34
                            int32_t eax_10 = data_1333e34
                            
                            do
                                if (eax_10 != 0)
                                    eax_10(hWnd, 0x180, 0, *i_4)
                                    eax_10 = data_1333e34
                                
                                i_4 = &i_4[1]
                            while (i_4 s< &data_612740)
                            
                            return eax_10
                        
                        if (arg1 != 0x35)
                            if (arg1 s<= 0x3d)
                                char const (** const i_5)[0xe] = &data_6126c0
                                data_20c2b70 = *((arg1 << 2) + &data_6123c8) + 0x4e
                                int32_t eax_13 = data_1333e34
                                
                                do
                                    if (eax_13 != 0)
                                        eax_13(hWnd, 0x180, 0, *i_5)
                                        eax_13 = data_1333e34
                                    
                                    i_5 = &i_5[1]
                                while (i_5 s< &data_612700)
                                
                                return eax_13
                            
                            if (arg1 != 0x3e && arg1 s<= 0x46)
                                char const (** const i_6)[0xe] = &data_6126c0
                                data_20c2b70 = &(*(&data_6123a4)[arg1])[0x68]
                                eax = data_1333e34
                                
                                do
                                    if (eax != 0)
                                        eax(hWnd, 0x180, 0, *i_6)
                                        eax = data_1333e34
                                    
                                    i_6 = &i_6[1]
                                while (i_6 s< &data_6126e0)

return eax
