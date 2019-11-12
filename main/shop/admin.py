from django.contrib import admin

from .models import Item
from .models import User

admin.site.register(Item)
admin.site.register(User)
