from django.shortcuts import render
from django.views.generic import TemplateView

from .models import Item, User


def index(request):
    item = Item.objects.all()
    user = User.objects.all()
    return render(request, 'shop.html', {'item': item}, {'user' : user})

    # return render(request, 'shop.html')

class BlogView(TemplateView):
    template_name = "shop.html"

    def get_context_data(self, **kwargs):
        records = Item.objects.all()
        context = dict(records=records)
        return context