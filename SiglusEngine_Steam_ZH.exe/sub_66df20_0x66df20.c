// 函数: sub_66df20
// 地址: 0x66df20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = sub_66e9f0(arg2)
int32_t eax

if (ebx != 0xffffffff)
    if (ebx - 0xd800 u> 0x7ff)
        goto label_66df8d
    
    if (ebx s< 0xdc00)
        if (sub_66b430(arg2) != 0x5c)
        label_66dfa3:
            
            if (arg2[2] != 0xffffffff)
                arg2[3].b = 1
        else
            if (sub_66b430(arg2) != 0x75)
                goto label_66dfa3
            
            eax = sub_66e9f0(arg2)
            
            if (eax - 0xdc00 u<= 0x3ff)
                ebx = ((ebx - 0xd800) << 0xa | (eax & 0x3ff)) + 0x10000
            label_66df8d:
                
                if (ebx s< 0x80)
                    std::basic_string<class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >,char,struct std::char_traits<char>,class std::allocator<char> >::assign<class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > > >(
                        arg1, ebx.b)
                    int32_t* eax_2
                    eax_2.b = 1
                    return eax_2
                
                char eax_4
                
                if (ebx s>= 0x800)
                    int32_t* ecx_6 = arg1
                    char eax_5
                    
                    if (ebx s>= 0x10000)
                        std::basic_string<class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >,char,struct std::char_traits<char>,class std::allocator<char> >::assign<class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > > >(
                            ecx_6, (ebx s>> 0x12).b | 0xf0)
                        ecx_6 = arg1
                        eax_5 = ((ebx s>> 0xc).b & 0x3f) | 0x80
                    else
                        eax_5 = (ebx s>> 0xc).b | 0xe0
                    
                    std::basic_string<class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >,char,struct std::char_traits<char>,class std::allocator<char> >::assign<class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > > >(
                        ecx_6, eax_5)
                    eax_4 = ((ebx s>> 6).b & 0x3f) | 0x80
                else
                    eax_4 = (ebx s>> 6).b | 0xc0
                
                std::basic_string<class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >,char,struct std::char_traits<char>,class std::allocator<char> >::assign<class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > > >(
                    arg1, eax_4)
                ebx.b &= 0x3f
                ebx.b |= 0x80
                std::basic_string<class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >,char,struct std::char_traits<char>,class std::allocator<char> >::assign<class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > > >(
                    arg1, ebx.b)
                int32_t* eax_13
                eax_13.b = 1
                return eax_13

eax.b = 0
return eax
