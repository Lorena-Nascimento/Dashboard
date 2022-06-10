[
    {
        "id": "aa24cb05fca243a9",
        "type": "tab",
        "label": "Dash",
        "disabled": false,
        "info": "",
        "env": []
    },
    {
        "id": "03379a0dfd83c49b",
        "type": "ui_base",
        "theme": {
            "name": "theme-dark",
            "lightTheme": {
                "default": "#0094CE",
                "baseColor": "#52cc00",
                "baseFont": "-apple-system,BlinkMacSystemFont,Segoe UI,Roboto,Oxygen-Sans,Ubuntu,Cantarell,Helvetica Neue,sans-serif",
                "edited": true,
                "reset": false
            },
            "darkTheme": {
                "default": "#097479",
                "baseColor": "#097479",
                "baseFont": "-apple-system,BlinkMacSystemFont,Segoe UI,Roboto,Oxygen-Sans,Ubuntu,Cantarell,Helvetica Neue,sans-serif",
                "edited": true,
                "reset": false
            },
            "customTheme": {
                "name": "Untitled Theme 1",
                "default": "#4B7930",
                "baseColor": "#4B7930",
                "baseFont": "-apple-system,BlinkMacSystemFont,Segoe UI,Roboto,Oxygen-Sans,Ubuntu,Cantarell,Helvetica Neue,sans-serif"
            },
            "themeState": {
                "base-color": {
                    "default": "#097479",
                    "value": "#097479",
                    "edited": true
                },
                "page-titlebar-backgroundColor": {
                    "value": "#097479",
                    "edited": false
                },
                "page-backgroundColor": {
                    "value": "#111111",
                    "edited": false
                },
                "page-sidebar-backgroundColor": {
                    "value": "#333333",
                    "edited": false
                },
                "group-textColor": {
                    "value": "#0eb8c0",
                    "edited": false
                },
                "group-borderColor": {
                    "value": "#555555",
                    "edited": false
                },
                "group-backgroundColor": {
                    "value": "#333333",
                    "edited": false
                },
                "widget-textColor": {
                    "value": "#eeeeee",
                    "edited": false
                },
                "widget-backgroundColor": {
                    "value": "#097479",
                    "edited": false
                },
                "widget-borderColor": {
                    "value": "#333333",
                    "edited": false
                },
                "base-font": {
                    "value": "-apple-system,BlinkMacSystemFont,Segoe UI,Roboto,Oxygen-Sans,Ubuntu,Cantarell,Helvetica Neue,sans-serif"
                }
            },
            "angularTheme": {
                "primary": "indigo",
                "accents": "blue",
                "warn": "red",
                "background": "grey",
                "palette": "light"
            }
        },
        "site": {
            "name": "Node-RED Dashboard",
            "hideToolbar": "false",
            "allowSwipe": "false",
            "lockMenu": "false",
            "allowTempTheme": "true",
            "dateFormat": "DD/MM/YYYY",
            "sizes": {
                "sx": 100,
                "sy": 48,
                "gx": 6,
                "gy": 6,
                "cx": 6,
                "cy": 6,
                "px": 0,
                "py": 0
            }
        }
    },
    {
        "id": "f6770663bb28e789",
        "type": "ui_group",
        "name": "Setor 1",
        "tab": "",
        "order": 2,
        "disp": true,
        "width": 9,
        "collapse": false,
        "className": ""
    },
    {
        "id": "3dd5c240cea3afea",
        "type": "mqtt-broker",
        "name": "",
        "broker": "lmcnascimento.duckdns.org",
        "port": "1883",
        "clientid": "",
        "autoConnect": true,
        "usetls": false,
        "protocolVersion": "4",
        "keepalive": "60",
        "cleansession": true,
        "birthTopic": "",
        "birthQos": "0",
        "birthPayload": "",
        "birthMsg": {},
        "closeTopic": "",
        "closeQos": "0",
        "closePayload": "",
        "closeMsg": {},
        "willTopic": "",
        "willQos": "0",
        "willPayload": "",
        "willMsg": {},
        "sessionExpiry": ""
    },
    {
        "id": "442ab58f0123a91a",
        "type": "node-red-contrib-whatsapp-cmb-account",
        "name": "Lorena"
    },
    {
        "id": "1b9a457b0a7c03b4",
        "type": "mqtt-broker",
        "name": "",
        "broker": "mcsghost.duckdns.org",
        "port": "1883",
        "clientid": "",
        "autoConnect": true,
        "usetls": false,
        "protocolVersion": "4",
        "keepalive": "60",
        "cleansession": true,
        "birthTopic": "",
        "birthQos": "0",
        "birthPayload": "",
        "birthMsg": {},
        "closeTopic": "",
        "closeQos": "0",
        "closePayload": "",
        "closeMsg": {},
        "willTopic": "",
        "willQos": "0",
        "willPayload": "",
        "willMsg": {},
        "sessionExpiry": ""
    },
    {
        "id": "5c1fe2e95ed5cf87",
        "type": "ui_group",
        "name": "Setor 2",
        "tab": "",
        "order": 3,
        "disp": true,
        "width": 9,
        "collapse": false,
        "className": ""
    },
    {
        "id": "2d69377080486d1b",
        "type": "ui_group",
        "name": "Pressão",
        "tab": "",
        "order": 1,
        "disp": true,
        "width": "6",
        "collapse": false,
        "className": ""
    },
    {
        "id": "20acbb40fb0fff54",
        "type": "mqtt-broker",
        "name": "",
        "broker": "mcsghost.duckdns.org",
        "port": "1883",
        "clientid": "",
        "autoConnect": true,
        "usetls": false,
        "protocolVersion": "4",
        "keepalive": "60",
        "cleansession": true,
        "birthTopic": "",
        "birthQos": "0",
        "birthPayload": "",
        "birthMsg": {},
        "closeTopic": "",
        "closeQos": "0",
        "closePayload": "",
        "closeMsg": {},
        "willTopic": "",
        "willQos": "0",
        "willPayload": "",
        "willMsg": {},
        "sessionExpiry": ""
    },
    {
        "id": "6331aa3d527ac852",
        "type": "ui_group",
        "name": "MQTT",
        "tab": "",
        "order": 1,
        "disp": true,
        "width": "12",
        "collapse": false,
        "className": ""
    },
    {
        "id": "3a9a19b4a0fb534a",
        "type": "node-red-contrib-whatsapp-cmb-account",
        "name": "Mateus"
    },
    {
        "id": "c1a04f25dbdfa481",
        "type": "node-red-contrib-whatsapp-cmb-account",
        "name": "Mateus 88"
    },
    {
        "id": "5ca6e3cefbae02f7",
        "type": "MySQLdatabase",
        "name": "tabela_a",
        "host": "trabalho.cdvctyqxafpw.us-east-1.rds.amazonaws.com",
        "port": "3306",
        "db": "trabalho",
        "tz": "hh:mm",
        "charset": "UTF8"
    },
    {
        "id": "09d17b0f7870a108",
        "type": "node-red-contrib-whatsapp-cmb-account",
        "name": "Mateus 88"
    },
    {
        "id": "66150604c7ebc4c2",
        "type": "MySQLdatabase",
        "name": "tabela_a",
        "host": "trabalho.cdvctyqxafpw.us-east-1.rds.amazonaws.com",
        "port": "3306",
        "db": "trabalho",
        "tz": "hh:mm",
        "charset": "UTF8"
    },
    {
        "id": "53f91f923bff11f3",
        "type": "node-red-contrib-whatsapp-cmb-account",
        "name": "Mateus 88"
    },
    {
        "id": "b73316d2653a752a",
        "type": "MySQLdatabase",
        "name": "tabela_a",
        "host": "trabalho.cdvctyqxafpw.us-east-1.rds.amazonaws.com",
        "port": "3306",
        "db": "trabalho",
        "tz": "hh:mm",
        "charset": "UTF8"
    },
    {
        "id": "230fb7a0271473bd",
        "type": "ui_tab",
        "name": "Monitoramento da Panta",
        "icon": "dashboard",
        "order": 1,
        "disabled": false,
        "hidden": false
    },
    {
        "id": "3526571fb24effd6",
        "type": "node-red-contrib-whatsapp-cmb-account",
        "name": "Mateus 88"
    },
    {
        "id": "5b7bec1b34d8e23b",
        "type": "MySQLdatabase",
        "name": "tabela_a",
        "host": "trabalho.cdvctyqxafpw.us-east-1.rds.amazonaws.com",
        "port": "3306",
        "db": "trabalho",
        "tz": "hh:mm",
        "charset": "UTF8"
    },
    {
        "id": "c5cec3f90606375e",
        "type": "ui_group",
        "name": "SETOR",
        "tab": "230fb7a0271473bd",
        "order": 1,
        "disp": true,
        "width": "13",
        "collapse": false,
        "className": ""
    },
    {
        "id": "df70d478c9436274",
        "type": "ui_tab",
        "name": "teste",
        "icon": "dashboard",
        "order": 1,
        "disabled": false,
        "hidden": false
    },
    {
        "id": "abe3a55f41522697",
        "type": "ui_group",
        "name": "MQTT1",
        "tab": "932df654016d66b8",
        "order": 2,
        "disp": true,
        "width": "6",
        "collapse": false
    },
    {
        "id": "932df654016d66b8",
        "type": "ui_tab",
        "name": "teste 1",
        "icon": "dashboard",
        "disabled": false,
        "hidden": false
    },
    {
        "id": "6d905fe0fc5658ba",
        "type": "mqtt-broker",
        "name": "",
        "broker": "mcsghost.duckdns.org",
        "port": "1883",
        "clientid": "",
        "autoConnect": true,
        "usetls": false,
        "compatmode": false,
        "protocolVersion": "4",
        "keepalive": "60",
        "cleansession": true,
        "birthTopic": "",
        "birthQos": "0",
        "birthPayload": "",
        "birthMsg": {},
        "closeTopic": "",
        "closeQos": "0",
        "closePayload": "",
        "closeMsg": {},
        "willTopic": "",
        "willQos": "0",
        "willPayload": "",
        "willMsg": {},
        "sessionExpiry": ""
    },
    {
        "id": "98a0604a218cfe96",
        "type": "ui_group",
        "name": "Gráficos",
        "tab": "f657c281e766cc48",
        "order": 2,
        "disp": true,
        "width": "6",
        "collapse": false
    },
    {
        "id": "15359901b8660283",
        "type": "ui_group",
        "name": "Sensor",
        "tab": "f657c281e766cc48",
        "order": 1,
        "disp": true,
        "width": "6",
        "collapse": false
    },
    {
        "id": "210f6eb9b8b01f61",
        "type": "mqtt-broker",
        "name": "mqtt_local",
        "broker": "localhost",
        "port": "1883",
        "clientid": "",
        "usetls": false,
        "compatmode": false,
        "keepalive": "60",
        "cleansession": true,
        "birthTopic": "",
        "birthQos": "0",
        "birthPayload": "",
        "closeTopic": "",
        "closeQos": "0",
        "closePayload": "",
        "willTopic": "",
        "willQos": "0",
        "willPayload": ""
    },
    {
        "id": "1c5f99835e27ec4f",
        "type": "ui_group",
        "name": "LEDs",
        "tab": "f657c281e766cc48",
        "order": 3,
        "disp": true,
        "width": 3,
        "collapse": false
    },
    {
        "id": "87f0a6328d1beb34",
        "type": "mqtt-broker",
        "name": "",
        "broker": "lmcnascimento.duckdns.org",
        "port": "1883",
        "clientid": "",
        "autoConnect": true,
        "usetls": false,
        "compatmode": false,
        "protocolVersion": "4",
        "keepalive": "60",
        "cleansession": true,
        "birthTopic": "",
        "birthQos": "0",
        "birthPayload": "",
        "birthMsg": {},
        "closeTopic": "",
        "closeQos": "0",
        "closePayload": "",
        "closeMsg": {},
        "willTopic": "",
        "willQos": "0",
        "willPayload": "",
        "willMsg": {},
        "sessionExpiry": ""
    },
    {
        "id": "cde6dd8f6c085b80",
        "type": "ui_group",
        "name": "grafico_mysql",
        "tab": "f657c281e766cc48",
        "order": 4,
        "disp": true,
        "width": "18",
        "collapse": false
    },
    {
        "id": "ea512fe7bb697d1d",
        "type": "ui_group",
        "name": "Tabela mysql",
        "tab": "f657c281e766cc48",
        "order": 5,
        "disp": true,
        "width": 11,
        "collapse": false
    },
    {
        "id": "f657c281e766cc48",
        "type": "ui_tab",
        "name": "FreeRtos",
        "icon": "dashboard",
        "order": 1,
        "disabled": false,
        "hidden": false
    },
    {
        "id": "330c3829982fc8e3",
        "type": "mqtt-broker",
        "name": "",
        "broker": "avrchaves.duckdns.org",
        "port": "1883",
        "clientid": "",
        "usetls": false,
        "compatmode": false,
        "protocolVersion": "4",
        "keepalive": "60",
        "cleansession": true,
        "birthTopic": "",
        "birthQos": "0",
        "birthPayload": "",
        "birthMsg": {},
        "closeTopic": "",
        "closeQos": "0",
        "closePayload": "",
        "closeMsg": {},
        "willTopic": "",
        "willQos": "0",
        "willPayload": "",
        "willMsg": {},
        "sessionExpiry": ""
    },
    {
        "id": "6d380c9042ca4220",
        "type": "ui_group",
        "name": "Gráficos",
        "tab": "26aa198ec869df94",
        "order": 2,
        "disp": true,
        "width": "6",
        "collapse": false
    },
    {
        "id": "e68d5e607e360aaa",
        "type": "ui_group",
        "name": "Sensor",
        "tab": "26aa198ec869df94",
        "order": 1,
        "disp": true,
        "width": "6",
        "collapse": false
    },
    {
        "id": "26aa198ec869df94",
        "type": "ui_tab",
        "name": "FreeRtos",
        "icon": "dashboard",
        "order": 1,
        "disabled": false,
        "hidden": false
    },
    {
        "id": "cc5f119e3912d7c1",
        "type": "ui_group",
        "name": "LEDs",
        "tab": "26aa198ec869df94",
        "order": 3,
        "disp": true,
        "width": 3,
        "collapse": false
    },
    {
        "id": "3236f5599acf4f70",
        "type": "MySQLdatabase",
        "name": "",
        "host": "enderecourldobancodedados",
        "port": "3306",
        "db": "basedados",
        "tz": "",
        "charset": "UTF8"
    },
    {
        "id": "d484749e99061b33",
        "type": "ui_group",
        "name": "grafico_mysql",
        "tab": "26aa198ec869df94",
        "order": 4,
        "disp": true,
        "width": "18",
        "collapse": false
    },
    {
        "id": "2f5f3bfdcedcde13",
        "type": "ui_group",
        "name": "Tabela mysql",
        "tab": "26aa198ec869df94",
        "order": 5,
        "disp": true,
        "width": 11,
        "collapse": false
    },
    {
        "id": "9a05dfa277da6ce2",
        "type": "MySQLdatabase",
        "name": "valores",
        "host": "sql-lorena.c8a6qfkprtnn.us-east-1.rds.amazonaws.com",
        "port": "3306",
        "db": "projetolo",
        "tz": "hh:mm",
        "charset": "UTF8"
    },
    {
        "id": "a8f5311959630ae3",
        "type": "MySQLdatabase",
        "name": "tabela_b",
        "host": "trabalho.cdvctyqxafpw.us-east-1.rds.amazonaws.com",
        "port": "3306",
        "db": "trabalho",
        "tz": "hh:mm",
        "charset": "UTF8"
    },
    {
        "id": "3408a62c88168184",
        "type": "node-red-contrib-whatsapp-cmb-account",
        "name": "Mateus 88"
    },
    {
        "id": "d48e934a.0e9208",
        "type": "MySQLdatabase",
        "name": "valores1",
        "host": "sql-lorena.c8a6qfkprtnn.us-east-1.rds.amazonaws.com",
        "port": "3306",
        "db": "projetolo",
        "tz": "hh:mm",
        "charset": "UTF8"
    },
    {
        "id": "64b8baa5fa37041f",
        "type": "MySQLdatabase",
        "name": "valores",
        "host": "sql-lorena.c8a6qfkprtnn.us-east-1.rds.amazonaws.com",
        "port": "3306",
        "db": "projetolo",
        "tz": "hh:mm",
        "charset": "UTF8"
    },
    {
        "id": "65e506e761baccbd",
        "type": "ui_spacer",
        "z": "aa24cb05fca243a9",
        "name": "spacer",
        "group": "6331aa3d527ac852",
        "order": 3,
        "width": 1,
        "height": 1
    },
    {
        "id": "788918d668b4fe45",
        "type": "ui_spacer",
        "z": "aa24cb05fca243a9",
        "name": "spacer",
        "group": "6331aa3d527ac852",
        "order": 6,
        "width": 1,
        "height": 1
    },
    {
        "id": "02acadae649217b4",
        "type": "MySQLdatabase",
        "name": "tabela_a",
        "host": "trabalho.cdvctyqxafpw.us-east-1.rds.amazonaws.com",
        "port": "3306",
        "db": "trabalho",
        "tz": "hh:mm",
        "charset": "UTF8"
    },
    {
        "id": "286ceb112de5511b",
        "type": "node-red-contrib-whatsapp-cmb-account",
        "name": "Mateus 88"
    },
    {
        "id": "b593be0da7f370c4",
        "type": "ui_tab",
        "name": "teste",
        "icon": "dashboard",
        "order": 1,
        "disabled": false,
        "hidden": false
    },
    {
        "id": "e7ae4a72419d9174",
        "type": "node-red-contrib-whatsapp-cmb-account",
        "name": "Mateus 88"
    },
    {
        "id": "352b03cbdc33cca2",
        "type": "MySQLdatabase",
        "name": "tabela_a",
        "host": "trabalho.cdvctyqxafpw.us-east-1.rds.amazonaws.com",
        "port": "3306",
        "db": "trabalho",
        "tz": "hh:mm",
        "charset": "UTF8"
    },
    {
        "id": "d6e500f27f39c7a3",
        "type": "ui_tab",
        "name": "teste",
        "icon": "dashboard",
        "order": 1,
        "disabled": false,
        "hidden": false
    },
    {
        "id": "0924498451cb0c46",
        "type": "mqtt-broker",
        "name": "",
        "broker": "lmcnascimento.duckdns.org",
        "port": "1883",
        "clientid": "",
        "autoConnect": true,
        "usetls": false,
        "compatmode": false,
        "protocolVersion": "4",
        "keepalive": "60",
        "cleansession": true,
        "birthTopic": "",
        "birthQos": "0",
        "birthPayload": "",
        "birthMsg": {},
        "closeTopic": "",
        "closeQos": "0",
        "closePayload": "",
        "closeMsg": {},
        "willTopic": "",
        "willQos": "0",
        "willPayload": "",
        "willMsg": {},
        "sessionExpiry": ""
    },
    {
        "id": "7b7daf9224c2a050",
        "type": "node-red-contrib-whatsapp-cmb-account",
        "name": "Mateus 88"
    },
    {
        "id": "b23ae942af684431",
        "type": "MySQLdatabase",
        "name": "tabela_a",
        "host": "trabalho.cdvctyqxafpw.us-east-1.rds.amazonaws.com",
        "port": "3306",
        "db": "trabalho",
        "tz": "hh:mm",
        "charset": "UTF8"
    },
    {
        "id": "d41fcfed25f0734e",
        "type": "MySQLdatabase",
        "name": "tabela_a2",
        "host": "trabalho.cdvctyqxafpw.us-east-1.rds.amazonaws.com",
        "port": "3306",
        "db": "trabalho",
        "tz": "hh:mm",
        "charset": "UTF8"
    },
    {
        "id": "f4292d5360c20290",
        "type": "MySQLdatabase",
        "name": "tabela_a1",
        "host": "trabalho.cdvctyqxafpw.us-east-1.rds.amazonaws.com",
        "port": "3306",
        "db": "trabalho",
        "tz": "hh:mm",
        "charset": "UTF8"
    },
    {
        "id": "94ab751c166b79c3",
        "type": "ui_tab",
        "name": "teste",
        "icon": "dashboard",
        "order": 1,
        "disabled": false,
        "hidden": false
    },
    {
        "id": "37275d0de3b0ed8f",
        "type": "ui_spacer",
        "z": "aa24cb05fca243a9",
        "name": "spacer",
        "group": "c5cec3f90606375e",
        "order": 1,
        "width": 2,
        "height": 1
    },
    {
        "id": "f1f44f3b5d7b1b3e",
        "type": "ui_spacer",
        "z": "aa24cb05fca243a9",
        "name": "spacer",
        "group": "c5cec3f90606375e",
        "order": 3,
        "width": 2,
        "height": 1
    },
    {
        "id": "2e5b97778a6fb906",
        "type": "ui_spacer",
        "z": "aa24cb05fca243a9",
        "name": "spacer",
        "group": "c5cec3f90606375e",
        "order": 5,
        "width": 2,
        "height": 1
    },
    {
        "id": "3aa36dacf42f8f28",
        "type": "ui_spacer",
        "z": "aa24cb05fca243a9",
        "name": "spacer",
        "group": "c5cec3f90606375e",
        "order": 7,
        "width": 1,
        "height": 1
    },
    {
        "id": "1a1498bfd2c9912c",
        "type": "ui_spacer",
        "z": "aa24cb05fca243a9",
        "name": "spacer",
        "group": "c5cec3f90606375e",
        "order": 11,
        "width": 1,
        "height": 1
    },
    {
        "id": "1e7b2beea5c7fb5a",
        "type": "ui_spacer",
        "z": "aa24cb05fca243a9",
        "name": "spacer",
        "group": "c5cec3f90606375e",
        "order": 12,
        "width": 1,
        "height": 1
    },
    {
        "id": "876aa4e42e08e9fa",
        "type": "ui_spacer",
        "z": "aa24cb05fca243a9",
        "name": "spacer",
        "group": "c5cec3f90606375e",
        "order": 13,
        "width": 1,
        "height": 1
    },
    {
        "id": "95493783b621391c",
        "type": "ui_spacer",
        "z": "aa24cb05fca243a9",
        "name": "spacer",
        "group": "c5cec3f90606375e",
        "order": 14,
        "width": 1,
        "height": 1
    },
    {
        "id": "06633359e5182701",
        "type": "ui_spacer",
        "z": "aa24cb05fca243a9",
        "name": "spacer",
        "group": "c5cec3f90606375e",
        "order": 15,
        "width": 1,
        "height": 1
    },
    {
        "id": "4414aef041b809e2",
        "type": "ui_spacer",
        "z": "aa24cb05fca243a9",
        "name": "spacer",
        "group": "c5cec3f90606375e",
        "order": 16,
        "width": 1,
        "height": 1
    },
    {
        "id": "81cfcc43f0cb1877",
        "type": "node-red-contrib-whatsapp-cmb-account",
        "name": "Mateus 88"
    },
    {
        "id": "cd96a220ac4dd42a",
        "type": "MySQLdatabase",
        "name": "tabela_a",
        "host": "trabalho.cdvctyqxafpw.us-east-1.rds.amazonaws.com",
        "port": "3306",
        "db": "trabalho",
        "tz": "hh:mm",
        "charset": "UTF8"
    },
    {
        "id": "32bc15c5cd1fde06",
        "type": "ui_tab",
        "name": "teste",
        "icon": "dashboard",
        "order": 1,
        "disabled": false,
        "hidden": false
    },
    {
        "id": "7bb76995ef084d0a",
        "type": "mqtt in",
        "z": "aa24cb05fca243a9",
        "name": "",
        "topic": "Setor",
        "qos": "0",
        "datatype": "auto",
        "broker": "87f0a6328d1beb34",
        "nl": false,
        "rap": true,
        "rh": 0,
        "inputs": 0,
        "x": 50,
        "y": 40,
        "wires": [
            [
                "c6d1f1f392364977"
            ]
        ]
    },
    {
        "id": "784b38aaf92813c1",
        "type": "json",
        "z": "aa24cb05fca243a9",
        "name": "",
        "property": "payload",
        "action": "",
        "pretty": true,
        "x": 190,
        "y": 100,
        "wires": [
            [
                "433001c06827103a"
            ]
        ]
    },
    {
        "id": "10b097486820054d",
        "type": "mqtt in",
        "z": "aa24cb05fca243a9",
        "name": "",
        "topic": "Parametro",
        "qos": "0",
        "datatype": "auto",
        "broker": "1b9a457b0a7c03b4",
        "nl": false,
        "rap": true,
        "rh": 0,
        "inputs": 0,
        "x": 60,
        "y": 100,
        "wires": [
            [
                "784b38aaf92813c1"
            ]
        ]
    },
    {
        "id": "c6d1f1f392364977",
        "type": "json",
        "z": "aa24cb05fca243a9",
        "name": "",
        "property": "payload",
        "action": "",
        "pretty": true,
        "x": 190,
        "y": 40,
        "wires": [
            [
                "0f10b0282a275086"
            ]
        ]
    },
    {
        "id": "44726883f35ed483",
        "type": "mysql",
        "z": "aa24cb05fca243a9",
        "mydb": "64b8baa5fa37041f",
        "name": "Posting 1",
        "x": 500,
        "y": 40,
        "wires": [
            [
                "11ff6230852f87a7"
            ]
        ]
    },
    {
        "id": "0f10b0282a275086",
        "type": "function",
        "z": "aa24cb05fca243a9",
        "name": "",
        "func": "var soil_moisture = msg.payload.soil_moisture;\nvar pressure = msg.payload.pressure*1000;\nvar humidity = msg.payload.humidity;\nvar temperatury = msg.payload.temperatury;\n\nmsg.topic = \"INSERT INTO valores (soil_moisture, pressure, humidity, temperatury) VALUES (\"+ soil_moisture +\",\"+ pressure +\",\"+ humidity +\",\"+ temperatury +\" );\"\nreturn msg;",
        "outputs": 1,
        "noerr": 0,
        "initialize": "",
        "finalize": "",
        "libs": [],
        "x": 340,
        "y": 40,
        "wires": [
            [
                "44726883f35ed483"
            ]
        ]
    },
    {
        "id": "433001c06827103a",
        "type": "function",
        "z": "aa24cb05fca243a9",
        "name": "",
        "func": "var soil_moisture_1 = msg.payload.soil_moisture_1;\nvar pressure_1 = msg.payload.pressure_1*1000;\nvar humidity_1 = msg.payload.humidity_1;\nvar temperatury_1 = msg.payload.temperatury_1;\n\nmsg.topic = \"INSERT INTO valores1 (soil_moisture_1, pressure_1, humidity_1, temperatury_1) VALUES (\"+ soil_moisture_1 +\",\"+ pressure_1 +\",\"+ humidity_1 +\",\"+ temperatury_1 +\" );\"\nreturn msg;",
        "outputs": 1,
        "noerr": 0,
        "initialize": "",
        "finalize": "",
        "libs": [],
        "x": 340,
        "y": 100,
        "wires": [
            [
                "1223c9a9558307ed"
            ]
        ]
    },
    {
        "id": "9535c6db49b38979",
        "type": "debug",
        "z": "aa24cb05fca243a9",
        "name": "",
        "active": true,
        "tosidebar": true,
        "console": false,
        "tostatus": false,
        "complete": "payload",
        "targetType": "msg",
        "statusVal": "",
        "statusType": "auto",
        "x": 670,
        "y": 100,
        "wires": []
    },
    {
        "id": "11ff6230852f87a7",
        "type": "debug",
        "z": "aa24cb05fca243a9",
        "name": "",
        "active": true,
        "tosidebar": true,
        "console": false,
        "tostatus": false,
        "complete": "payload",
        "targetType": "msg",
        "statusVal": "",
        "statusType": "auto",
        "x": 670,
        "y": 40,
        "wires": []
    },
    {
        "id": "1223c9a9558307ed",
        "type": "mysql",
        "z": "aa24cb05fca243a9",
        "mydb": "d48e934a.0e9208",
        "name": "Posting 2",
        "x": 500,
        "y": 100,
        "wires": [
            [
                "9535c6db49b38979"
            ]
        ]
    },
    {
        "id": "62738f577babe9d2",
        "type": "ui_gauge",
        "z": "aa24cb05fca243a9",
        "name": "Umididade do Solo",
        "group": "c5cec3f90606375e",
        "order": 1,
        "width": 4,
        "height": 7,
        "gtype": "wave",
        "title": "Umididade do Solo",
        "label": "%",
        "format": "{{value}}",
        "min": 0,
        "max": "100",
        "colors": [
            "#00b500",
            "#e6e600",
            "#ca3838"
        ],
        "seg1": "",
        "seg2": "",
        "className": "",
        "x": 830,
        "y": 480,
        "wires": []
    },
    {
        "id": "c2efe87bacbaa355",
        "type": "node-red-contrib-whatsapp-cmb-send-message",
        "z": "aa24cb05fca243a9",
        "name": "Irrigação",
        "account": "81cfcc43f0cb1877",
        "text": "!!! Alerta !!!                                                                       A irrigação pode estar com problemas",
        "inputtypemessage": "str",
        "rejectssl": false,
        "x": 1400,
        "y": 300,
        "wires": [
            [
                "d1a243b628a040f1"
            ]
        ]
    },
    {
        "id": "3a62ef5369fd7c17",
        "type": "switch",
        "z": "aa24cb05fca243a9",
        "name": "Aler.pres",
        "property": "payload",
        "propertyType": "msg",
        "rules": [
            {
                "t": "eq",
                "v": "0.9",
                "vt": "num"
            },
            {
                "t": "eq",
                "v": "0.2",
                "vt": "num"
            },
            {
                "t": "eq",
                "v": "0",
                "vt": "num"
            },
            {
                "t": "gte",
                "v": "0.6",
                "vt": "num"
            }
        ],
        "checkall": "false",
        "repair": true,
        "outputs": 4,
        "x": 800,
        "y": 240,
        "wires": [
            [
                "e17cf1634f56a002"
            ],
            [
                "6953a6918a193ee4",
                "aaffe3c2681b73f4"
            ],
            [
                "7a0b3fc595314d41"
            ],
            [
                "b66f79b61fdb5679"
            ]
        ]
    },
    {
        "id": "0801930ec6b016d0",
        "type": "node-red-contrib-whatsapp-cmb-send-message",
        "z": "aa24cb05fca243a9",
        "name": "Irrigação",
        "account": "81cfcc43f0cb1877",
        "text": "!!! Alerta !!!                                                                       A humidade do solo esta baixa, recomenda-se ligar a irrigação",
        "inputtypemessage": "str",
        "rejectssl": false,
        "x": 1400,
        "y": 340,
        "wires": [
            [
                "d1a243b628a040f1"
            ]
        ]
    },
    {
        "id": "8672bc7bcd527ad1",
        "type": "node-red-contrib-whatsapp-cmb-send-message",
        "z": "aa24cb05fca243a9",
        "name": "Irrigação",
        "account": "81cfcc43f0cb1877",
        "text": "!!! Alerta !!!                                                                       A humidade do solo esta alta, recomenda-se desligar a irrigação",
        "inputtypemessage": "str",
        "rejectssl": false,
        "x": 1400,
        "y": 380,
        "wires": [
            [
                "d1a243b628a040f1"
            ]
        ]
    },
    {
        "id": "33676dcdddb20796",
        "type": "switch",
        "z": "aa24cb05fca243a9",
        "name": "Aler.h.s",
        "property": "payload",
        "propertyType": "msg",
        "rules": [
            {
                "t": "lt",
                "v": "80",
                "vt": "num"
            },
            {
                "t": "gt",
                "v": "40",
                "vt": "num"
            },
            {
                "t": "lte",
                "v": "40",
                "vt": "num"
            },
            {
                "t": "gte",
                "v": "80",
                "vt": "num"
            }
        ],
        "checkall": "true",
        "repair": false,
        "outputs": 4,
        "x": 800,
        "y": 320,
        "wires": [
            [
                "7a41e1fb1d3011f3"
            ],
            [
                "7a41e1fb1d3011f3"
            ],
            [
                "3cdcc077be9d981a",
                "65b8c6b8a2906e5c"
            ],
            [
                "5cf8b84b56c8974d",
                "cba0eee4380c4312"
            ]
        ]
    },
    {
        "id": "07dcbffd3e9c7e82",
        "type": "ui_chart",
        "z": "aa24cb05fca243a9",
        "name": "Temperatura Ambiente",
        "group": "c5cec3f90606375e",
        "order": 8,
        "width": 12,
        "height": 4,
        "label": "Temperatura Ambiente",
        "chartType": "line",
        "legend": "false",
        "xformat": "HH:mm",
        "interpolate": "linear",
        "nodata": "",
        "dot": false,
        "ymin": "",
        "ymax": "",
        "removeOlder": "1",
        "removeOlderPoints": "10",
        "removeOlderUnit": "86400",
        "cutout": 0,
        "useOneColor": false,
        "useUTC": false,
        "colors": [
            "#1f77b4",
            "#aec7e8",
            "#ff7f0e",
            "#2ca02c",
            "#98df8a",
            "#d62728",
            "#ff9896",
            "#9467bd",
            "#c5b0d5"
        ],
        "outputs": 1,
        "useDifferentColor": false,
        "className": "",
        "x": 840,
        "y": 560,
        "wires": [
            []
        ]
    },
    {
        "id": "ab4dbacf774c5469",
        "type": "ui_gauge",
        "z": "aa24cb05fca243a9",
        "name": "Pressão da Água",
        "group": "c5cec3f90606375e",
        "order": 7,
        "width": 4,
        "height": 6,
        "gtype": "gage",
        "title": "Pressão da Água",
        "label": "Bar",
        "format": "{{value}}",
        "min": 0,
        "max": "1",
        "colors": [
            "#55ed02",
            "#049565",
            "#0bc1be"
        ],
        "seg1": "0.3",
        "seg2": "0.7",
        "className": "",
        "x": 830,
        "y": 440,
        "wires": []
    },
    {
        "id": "2059bde85c02b5cd",
        "type": "ui_gauge",
        "z": "aa24cb05fca243a9",
        "name": "Umidade Ambiente",
        "group": "c5cec3f90606375e",
        "order": 6,
        "width": 4,
        "height": 6,
        "gtype": "donut",
        "title": "Umidade Ambiente",
        "label": "%",
        "format": "{{value}}",
        "min": 0,
        "max": "100",
        "colors": [
            "#d37217",
            "#efdc0b",
            "#37b800"
        ],
        "seg1": "30",
        "seg2": "70",
        "className": "",
        "x": 830,
        "y": 520,
        "wires": []
    },
    {
        "id": "d5493b1e7a2e6a8c",
        "type": "mysql",
        "z": "aa24cb05fca243a9",
        "mydb": "cd96a220ac4dd42a",
        "name": "Getting A0",
        "x": 330,
        "y": 380,
        "wires": [
            [
                "83db2df511afe8ce",
                "c5c733c15fc7a624",
                "2c320cb3d07e7111",
                "88bca44af9928af6"
            ]
        ]
    },
    {
        "id": "a39ec82fde9de17b",
        "type": "function",
        "z": "aa24cb05fca243a9",
        "name": "",
        "func": "msg.payload = true;\nmsg.topic = \"SELECT * FROM tabela_a order by timeStamp DESC limit 2\"\nreturn msg;",
        "outputs": 1,
        "noerr": 0,
        "initialize": "",
        "finalize": "",
        "libs": [],
        "x": 180,
        "y": 380,
        "wires": [
            [
                "d5493b1e7a2e6a8c"
            ]
        ]
    },
    {
        "id": "2021e6d975449b38",
        "type": "debug",
        "z": "aa24cb05fca243a9",
        "name": "",
        "active": false,
        "tosidebar": true,
        "console": false,
        "tostatus": false,
        "complete": "false",
        "statusVal": "",
        "statusType": "auto",
        "x": 1250,
        "y": 200,
        "wires": []
    },
    {
        "id": "6953a6918a193ee4",
        "type": "function",
        "z": "aa24cb05fca243a9",
        "name": "",
        "func": "msg.payload = \"!!! Alerta !!!                                                                       A irrigação pode estar com problemas\"\nreturn msg;",
        "outputs": 1,
        "noerr": 0,
        "initialize": "",
        "finalize": "",
        "libs": [],
        "x": 1040,
        "y": 60,
        "wires": [
            [
                "2021e6d975449b38",
                "20657542355ae6a5"
            ]
        ]
    },
    {
        "id": "65b8c6b8a2906e5c",
        "type": "function",
        "z": "aa24cb05fca243a9",
        "name": "",
        "func": "msg.payload = \"!!! Alerta !!!                                                                       A humidade do solo esta baixa, recomenda-se ligar a irrigação\"\nreturn msg;",
        "outputs": 1,
        "noerr": 0,
        "initialize": "",
        "finalize": "",
        "libs": [],
        "x": 1040,
        "y": 220,
        "wires": [
            [
                "2021e6d975449b38",
                "59c18ba73b625f3d"
            ]
        ]
    },
    {
        "id": "cba0eee4380c4312",
        "type": "function",
        "z": "aa24cb05fca243a9",
        "name": "",
        "func": "msg.payload = \"!!! Alerta !!!                                                                       A humidade do solo esta alta, recomenda-se desligar a irrigação\"\nreturn msg;",
        "outputs": 1,
        "noerr": 0,
        "initialize": "",
        "finalize": "",
        "libs": [],
        "x": 1040,
        "y": 260,
        "wires": [
            [
                "2021e6d975449b38",
                "59c18ba73b625f3d"
            ]
        ]
    },
    {
        "id": "b66f79b61fdb5679",
        "type": "function",
        "z": "aa24cb05fca243a9",
        "name": "",
        "func": "msg.payload = \"Funcionamento normal\"\nreturn msg;",
        "outputs": 1,
        "noerr": 0,
        "initialize": "",
        "finalize": "",
        "libs": [],
        "x": 1040,
        "y": 140,
        "wires": [
            [
                "2021e6d975449b38",
                "20657542355ae6a5"
            ]
        ]
    },
    {
        "id": "20657542355ae6a5",
        "type": "ui_text",
        "z": "aa24cb05fca243a9",
        "group": "c5cec3f90606375e",
        "order": 9,
        "width": 6,
        "height": 1,
        "name": "",
        "label": "Alertas da Produção:",
        "format": "{{msg.payload}}",
        "layout": "row-left",
        "className": "",
        "x": 1280,
        "y": 80,
        "wires": []
    },
    {
        "id": "59c18ba73b625f3d",
        "type": "ui_text",
        "z": "aa24cb05fca243a9",
        "group": "c5cec3f90606375e",
        "order": 10,
        "width": 6,
        "height": 1,
        "name": "",
        "label": "Alertas da Irrigação:",
        "format": "{{msg.payload}}",
        "layout": "row-left",
        "className": "",
        "x": 1280,
        "y": 120,
        "wires": []
    },
    {
        "id": "88bca44af9928af6",
        "type": "function",
        "z": "aa24cb05fca243a9",
        "name": "pressure",
        "func": "\nvar a;\nvar b;\nif(msg.payload[1].pressure_1 != 0 && msg.payload[0].pressure != 0)\n{\n    msg.payload = msg.payload[0].pressure-300;\n}\nelse\n{\n    msg.payload = msg.payload[1].pressure-300;\n}\nmsg.payload = parseFloat((msg.payload / 4095) * 12.0).toFixed(1);\n\nreturn msg;",
        "outputs": 1,
        "noerr": 0,
        "initialize": "",
        "finalize": "",
        "libs": [],
        "x": 500,
        "y": 380,
        "wires": [
            [
                "a1f38143612c10c3"
            ]
        ]
    },
    {
        "id": "83db2df511afe8ce",
        "type": "function",
        "z": "aa24cb05fca243a9",
        "name": "soil mois",
        "func": "if(msg.payload[0].soil_moisture != 0 && msg.payload[1].soil_moisture_1 != 0 )\n{\n    msg.payload = (msg.payload[0].soil_moisture + msg.payload[1].soil_moisture_1)/2;\n}\nelse if(msg.payload[1].soil_moisture != 0 && msg.payload[0].soil_moisture_1 != 0 )\n{\n    msg.payload = (msg.payload[1].soil_moisture + msg.payload[0].soil_moisture_1)/2;\n}\nelse if(msg.payload[0].soil_moisture != 0 && msg.payload[1].soil_moisture_1 == 0 )\n{\n    msg.payload = msg.payload[0].soil_moisture;\n}\nelse\n{\n    msg.payload = msg.payload[1].soil_moisture_1;\n}\nreturn msg;\n",
        "outputs": 1,
        "noerr": 0,
        "initialize": "",
        "finalize": "",
        "libs": [],
        "x": 500,
        "y": 420,
        "wires": [
            [
                "62738f577babe9d2",
                "dc1b5588f55611a9",
                "33676dcdddb20796"
            ]
        ]
    },
    {
        "id": "c5c733c15fc7a624",
        "type": "function",
        "z": "aa24cb05fca243a9",
        "name": "humidity",
        "func": "if(msg.payload[0].humidity != 0 && msg.payload[1].humidity_1 != 0 )\n{\n    msg.payload = (msg.payload[0].humidity + msg.payload[1].humidity_1)/2;\n}\nelse if(msg.payload[1].humidity != 0 && msg.payload[0].humidity_1 != 0 )\n{\n    msg.payload = (msg.payload[1].humidity + msg.payload[0].humidity_1)/2;\n}\nelse if(msg.payload[0].humidity != 0 && msg.payload[1].humidity_1 == 0 )\n{\n    msg.payload = msg.payload[0].humidity;\n}\nelse\n{\n    msg.payload = msg.payload[1].humidity_1;\n}\nreturn msg;",
        "outputs": 1,
        "noerr": 0,
        "initialize": "",
        "finalize": "",
        "libs": [],
        "x": 500,
        "y": 460,
        "wires": [
            [
                "2059bde85c02b5cd",
                "dc1b5588f55611a9"
            ]
        ]
    },
    {
        "id": "2c320cb3d07e7111",
        "type": "function",
        "z": "aa24cb05fca243a9",
        "name": "tempera",
        "func": "\nif(msg.payload[0].temperatury != 0 && msg.payload[1].temperatury_1 != 0 )\n{\n    msg.payload = (msg.payload[0].temperatury + msg.payload[1].temperatury_1)/2;\n}\nelse if(msg.payload[1].temperatury != 0 && msg.payload[0].temperatury_1 != 0 )\n{\n    msg.payload = (msg.payload[1].temperatury + msg.payload[0].temperatury_1)/2;\n}\nelse if(msg.payload[0].temperatury != 0 && msg.payload[1].temperatury_1 == 0 )\n{\n    msg.payload = msg.payload[0].temperatury;\n}\nelse\n{\n    msg.payload = msg.payload[1].temperatury_1;\n}\nreturn msg;\n",
        "outputs": 1,
        "noerr": 0,
        "initialize": "",
        "finalize": "",
        "libs": [],
        "x": 500,
        "y": 500,
        "wires": [
            [
                "07dcbffd3e9c7e82",
                "dc1b5588f55611a9"
            ]
        ]
    },
    {
        "id": "7a41e1fb1d3011f3",
        "type": "function",
        "z": "aa24cb05fca243a9",
        "name": "",
        "func": "msg.payload = \"Porcentagem adequada de umidade\"\nreturn msg;",
        "outputs": 1,
        "noerr": 0,
        "initialize": "",
        "finalize": "",
        "libs": [],
        "x": 1040,
        "y": 180,
        "wires": [
            [
                "59c18ba73b625f3d",
                "2021e6d975449b38"
            ]
        ]
    },
    {
        "id": "5cf8b84b56c8974d",
        "type": "ui_switch",
        "z": "aa24cb05fca243a9",
        "name": "",
        "label": "            Umidade Alta:",
        "tooltip": "",
        "group": "c5cec3f90606375e",
        "order": 3,
        "width": 2,
        "height": 1,
        "passthru": true,
        "decouple": "false",
        "topic": "topic",
        "topicType": "msg",
        "style": "",
        "onvalue": "true",
        "onvalueType": "bool",
        "onicon": "wb_cloudy",
        "oncolor": "cyan",
        "offvalue": "false",
        "offvalueType": "bool",
        "officon": "cloud_off",
        "offcolor": "white",
        "animate": true,
        "className": "",
        "x": 1060,
        "y": 380,
        "wires": [
            [
                "569a3b0207c9b9b0"
            ]
        ]
    },
    {
        "id": "3cdcc077be9d981a",
        "type": "ui_switch",
        "z": "aa24cb05fca243a9",
        "name": "",
        "label": "            Umidade Baixa:",
        "tooltip": "",
        "group": "c5cec3f90606375e",
        "order": 4,
        "width": 2,
        "height": 1,
        "passthru": true,
        "decouple": "false",
        "topic": "topic",
        "topicType": "msg",
        "style": "",
        "onvalue": "true",
        "onvalueType": "bool",
        "onicon": "wb_sunny",
        "oncolor": "orange",
        "offvalue": "false",
        "offvalueType": "bool",
        "officon": "wb_sunny",
        "offcolor": "white",
        "animate": true,
        "className": "",
        "x": 1060,
        "y": 340,
        "wires": [
            [
                "40a1bc5a1041852a"
            ]
        ]
    },
    {
        "id": "aaffe3c2681b73f4",
        "type": "ui_switch",
        "z": "aa24cb05fca243a9",
        "name": "",
        "label": "Alerta Irrigação:",
        "tooltip": "",
        "group": "c5cec3f90606375e",
        "order": 2,
        "width": 2,
        "height": 1,
        "passthru": true,
        "decouple": "false",
        "topic": "topic",
        "topicType": "msg",
        "style": "",
        "onvalue": "true",
        "onvalueType": "bool",
        "onicon": "notifications_active",
        "oncolor": "green",
        "offvalue": "false",
        "offvalueType": "bool",
        "officon": "notifications_off",
        "offcolor": "white",
        "animate": true,
        "className": "",
        "x": 1060,
        "y": 300,
        "wires": [
            [
                "cbf55f272c055faa"
            ]
        ]
    },
    {
        "id": "d1a243b628a040f1",
        "type": "debug",
        "z": "aa24cb05fca243a9",
        "name": "",
        "active": false,
        "tosidebar": true,
        "console": false,
        "tostatus": false,
        "complete": "false",
        "statusVal": "",
        "statusType": "auto",
        "x": 1570,
        "y": 320,
        "wires": []
    },
    {
        "id": "db8820b539f74fea",
        "type": "inject",
        "z": "aa24cb05fca243a9",
        "name": "Time",
        "props": [
            {
                "p": "payload"
            },
            {
                "p": "topic",
                "v": "true",
                "vt": "bool"
            }
        ],
        "repeat": "10",
        "crontab": "",
        "once": false,
        "onceDelay": "10",
        "topic": "",
        "payload": "",
        "payloadType": "date",
        "x": 50,
        "y": 380,
        "wires": [
            [
                "a39ec82fde9de17b"
            ]
        ]
    },
    {
        "id": "a1f38143612c10c3",
        "type": "json",
        "z": "aa24cb05fca243a9",
        "name": "",
        "property": "payload",
        "action": "",
        "pretty": false,
        "x": 650,
        "y": 380,
        "wires": [
            [
                "ab4dbacf774c5469",
                "3a62ef5369fd7c17",
                "dc1b5588f55611a9"
            ]
        ]
    },
    {
        "id": "dc1b5588f55611a9",
        "type": "debug",
        "z": "aa24cb05fca243a9",
        "name": "",
        "active": true,
        "tosidebar": true,
        "console": false,
        "tostatus": false,
        "complete": "false",
        "statusVal": "",
        "statusType": "auto",
        "x": 810,
        "y": 600,
        "wires": []
    },
    {
        "id": "7a0b3fc595314d41",
        "type": "function",
        "z": "aa24cb05fca243a9",
        "name": "",
        "func": "msg.payload = \"Sistema desligado\"\nreturn msg;",
        "outputs": 1,
        "noerr": 0,
        "initialize": "",
        "finalize": "",
        "libs": [],
        "x": 1040,
        "y": 100,
        "wires": [
            [
                "20657542355ae6a5"
            ]
        ]
    },
    {
        "id": "e17cf1634f56a002",
        "type": "function",
        "z": "aa24cb05fca243a9",
        "name": "",
        "func": "msg.payload = \"!!! Alerta !!!                                                                       Aspersores pode esta fechado\"\nreturn msg;",
        "outputs": 1,
        "noerr": 0,
        "initialize": "",
        "finalize": "",
        "libs": [],
        "x": 1040,
        "y": 20,
        "wires": [
            [
                "20657542355ae6a5"
            ]
        ]
    },
    {
        "id": "cbf55f272c055faa",
        "type": "delay",
        "z": "aa24cb05fca243a9",
        "name": "",
        "pauseType": "delay",
        "timeout": "10",
        "timeoutUnits": "seconds",
        "rate": "1",
        "nbRateUnits": "1",
        "rateUnits": "second",
        "randomFirst": "1",
        "randomLast": "5",
        "randomUnits": "seconds",
        "drop": false,
        "allowrate": false,
        "outputs": 1,
        "x": 1240,
        "y": 300,
        "wires": [
            [
                "c2efe87bacbaa355"
            ]
        ]
    },
    {
        "id": "40a1bc5a1041852a",
        "type": "delay",
        "z": "aa24cb05fca243a9",
        "name": "",
        "pauseType": "delay",
        "timeout": "10",
        "timeoutUnits": "seconds",
        "rate": "1",
        "nbRateUnits": "1",
        "rateUnits": "second",
        "randomFirst": "1",
        "randomLast": "5",
        "randomUnits": "seconds",
        "drop": false,
        "allowrate": false,
        "outputs": 1,
        "x": 1240,
        "y": 340,
        "wires": [
            [
                "0801930ec6b016d0"
            ]
        ]
    },
    {
        "id": "569a3b0207c9b9b0",
        "type": "delay",
        "z": "aa24cb05fca243a9",
        "name": "",
        "pauseType": "delay",
        "timeout": "10",
        "timeoutUnits": "seconds",
        "rate": "1",
        "nbRateUnits": "1",
        "rateUnits": "second",
        "randomFirst": "1",
        "randomLast": "5",
        "randomUnits": "seconds",
        "drop": false,
        "allowrate": false,
        "outputs": 1,
        "x": 1240,
        "y": 380,
        "wires": [
            [
                "8672bc7bcd527ad1"
            ]
        ]
    }
]
